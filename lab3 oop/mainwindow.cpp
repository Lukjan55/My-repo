#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QString>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    catalog.addProduct(Product("Lawn mower", 25000));
    catalog.addProduct(Product("Chainsaw", 5600));
    catalog.addProduct(Product("Hedge trimmer", 3520));
    catalog.addProduct(Product("Plant care tool set", 7400));
    catalog.addProduct(Product("Brush cutter", 4800));
    catalog.addProduct(Product("Leaf blower", 3000));

    connect(ui->displayProductsButton, &QPushButton::clicked, this, &MainWindow::on_displayProductsButton_clicked);
    connect(ui->buyProductButton, &QPushButton::clicked, this, &MainWindow::on_buyProductButton_clicked);
    connect(ui->displayCartButton, &QPushButton::clicked, this, &MainWindow::on_displayCartButton_clicked);
    connect(ui->totalCostButton, &QPushButton::clicked, this, &MainWindow::on_totalCostButton_clicked);
    connect(ui->removeFromCartButton, &QPushButton::clicked, this, &MainWindow::on_removeFromCartButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_displayProductsButton_clicked()
{
    QString productList;
    Node* temp = catalog.getProducts(); // Використовуємо метод доступу

    while (temp) {
        productList += QString("Product: %1, Price: %2 UAH\n").arg(QString::fromStdString(temp->data.getName())).arg(temp->data.getPrice());
        temp = temp->next;
    }

    QMessageBox::information(this, "Available Products", productList);
}

void MainWindow::on_buyProductButton_clicked()
{
    bool ok;
    QString productName = QInputDialog::getText(this, "Buy Product", "Enter the name of the product you want to buy:", QLineEdit::Normal, "", &ok);

    if (ok && !productName.isEmpty()) {
        if (!catalog.buyProduct(productName.toStdString())) {
            QMessageBox::warning(this, "Product Not Found", "Sorry, the product is not available.");
        }
    }
}

void MainWindow::on_displayCartButton_clicked()
{
    QString cartList;
    Node* temp = catalog.getCart(); // Використовуємо метод доступу

    while (temp) {
        cartList += QString("Product: %1, Price: %2 UAH\n").arg(QString::fromStdString(temp->data.getName())).arg(temp->data.getPrice());
        temp = temp->next;
    }

    QMessageBox::information(this, "Cart Contents", cartList);
}

void MainWindow::on_totalCostButton_clicked()
{
    float totalCost = catalog.getTotalCost();
    QMessageBox::information(this, "Total Cost", QString("Total cost: %1 UAH").arg(totalCost));
}

void MainWindow::on_removeFromCartButton_clicked()
{
    bool ok;
    QString productName = QInputDialog::getText(this, "Remove Product from Cart", "Enter the name of the product you want to remove:", QLineEdit::Normal, "", &ok);

    if (ok && !productName.isEmpty()) {
        catalog.removeFromCart(productName.toStdString());
    }
}

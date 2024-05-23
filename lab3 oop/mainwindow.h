#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "product.h"
#include "product_catalog.h"
#include "cart_item.h"
#include "item.h"
#include "product.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_displayProductsButton_clicked();
    void on_buyProductButton_clicked();
    void on_displayCartButton_clicked();
    void on_totalCostButton_clicked();
    void on_removeFromCartButton_clicked();

private:
    Ui::MainWindow *ui;
    ProductCatalog catalog;
};

#endif // MAINWINDOW_H

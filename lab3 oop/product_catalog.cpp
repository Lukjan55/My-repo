#include "product_catalog.h"
#include <iostream>
#include <algorithm>

using namespace std;

void ProductCatalog::addProduct(const Product& product)
{
    Node* newNode = new Node(product);

    if (!products)
    {
        products = newNode;
    }
    else
    {
        Node* temp = products;

        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void ProductCatalog::displayProducts() const
{
    cout << "\nAvailable Products:\n\n";
    Node* temp = products;

    while (temp)
    {
        cout << "Product: " << temp->data.getName() << ", Price: " << temp->data.getPrice() << " UAH" << endl;
        temp = temp->next;
    }
    cout << endl;
}

bool ProductCatalog::buyProduct(const string& productName)
{
    Node* prev = nullptr;
    Node* curr = products;

    while (curr && curr->data.getName() != productName)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr)
    {
        cout << "\nYou have purchased: " << productName << " for " << curr->data.getPrice() << " UAH\n\n";
        addToCart(curr->data);

        if (prev)
        {
            prev->next = curr->next;
        }
        else
        {
            products = curr->next;
        }
        delete curr;
        return true;
    }
    cout << "\nSorry, " << productName << " is not available\n";
    return false;
}

void ProductCatalog::addToCart(const Product& product)
{
    Node* newNode = new Node(product);

    if (!cart)
    {
        cart = newNode;
    }
    else
    {
        Node* temp = cart;

        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void ProductCatalog::removeFromCart(const string& productName)
{
    Node* prev = nullptr;
    Node* curr = cart;

    while (curr && curr->data.getName() != productName)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr)
    {
        if (prev)
        {
            prev->next = curr->next;
        }
        else
        {
            cart = curr->next;
        }
        cout << endl << productName << " removed from cart\n\n";
        delete curr;
    }
    else
    {
        cout << "\nProduct not found in cart\n\n";
    }
}

void ProductCatalog::displayCart() const
{
    cout << "\nCart contents:" << endl;
    Node* temp = cart;

    while (temp)
    {
        cout << "Product: " << temp->data.getName() << ", Price: " << temp->data.getPrice() << " UAH" << endl;
        temp = temp->next;
    }
    cout << endl;
}

float ProductCatalog::getTotalCost() const
{
    float total = 0.0f;
    Node* temp = cart;

    while (temp)
    {
        total += temp->data.getPrice();
        temp = temp->next;
    }
    return total;
}

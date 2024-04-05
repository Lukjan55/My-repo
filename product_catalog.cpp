#include "product_catalog.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

void ProductCatalog::addProduct(const Product& product) 
{
    products.push_back(product);
}

void ProductCatalog::displayProducts() const 
{
    cout << "\nAvailable Products:\n\n";

    for (const auto& product : products) 
    {
        cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << " UAH" <<endl;
    }
    cout << endl;
}

bool ProductCatalog::buyProduct(const string& productName) 
{
    auto it = find_if(products.begin(), products.end(), [&productName](const Product& p) 
    {
        return p.getName() == productName;
    });

    if (it != products.end()) 
    {
        cout << "\nYou have purchased: " << productName << " for " << it->getPrice() << " UAH\n\n";
        addToCart(*it);
        products.erase(it);
        return true;
    }
    cout << "\nSorry, " << productName << " is not available\n";
    return false;
}

void ProductCatalog::addToCart(const Product& product) 
{
    cart.push_back(product);
}

void ProductCatalog::removeFromCart(const string& productName) 
{
    auto it = find_if(cart.begin(), cart.end(), [&productName](const Product& p) 
    {
        return p.getName() == productName;
    });

    if (it != cart.end()) 
    {
        products.push_back(*it);
        cart.erase(it);
        cout << endl << productName << " removed from cart\n\n";
    } 
    else 
    {
        cout << "\nProduct not found in cart\n\n";
    }
}


void ProductCatalog::displayCart() const 
{
    cout << "\nCart contents:" << endl;
    for (const auto& product : cart) 
    {
        cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << " UAH" << endl;
    }
    cout << endl;
}

float ProductCatalog::getTotalCost() const 
{
    float total = 0.0f;
    for (const auto& product : cart) 
    {
        total += product.getPrice();
    }
    return total;
}

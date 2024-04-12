#ifndef PRODUCT_CATALOG_HPP
#define PRODUCT_CATALOG_HPP

#include "product.hpp"
#include <vector>

using namespace std;

class ProductCatalog 
{
private:
    vector<Product> products;
    vector<Product> cart;
public:
    void addProduct(const Product& product);
    void displayProducts() const;
    bool buyProduct(const std::string& productName);
    void addToCart(const Product& product);
    void removeFromCart(const std::string& productName);
    void displayCart() const;
    float getTotalCost() const;
};

#endif 

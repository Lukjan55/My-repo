#ifndef PRODUCT_CATALOG_HPP
#define PRODUCT_CATALOG_HPP

#include "product.hpp"

class Node 
{
public:
    Product data;
    Node* next;
    Node(const Product& product) : data(product), next(nullptr) {}
};

class ProductCatalog 
{
private:
    Node* products;
    Node* cart;
public:
    ProductCatalog() : products(nullptr), cart(nullptr) {}
    ~ProductCatalog() 
    {
        clearList(products);
        clearList(cart);
    }
    void addProduct(const Product& product);
    void displayProducts() const;
    bool buyProduct(const std::string& productName);
    void addToCart(const Product& product);
    void removeFromCart(const std::string& productName);
    void displayCart() const;
    float getTotalCost() const;

private:
    void clearList(Node* &head) 
    {
        while (head) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

#endif
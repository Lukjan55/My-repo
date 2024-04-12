#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "item.hpp"

using namespace std;

class Product : public Item 
{
public:
    Product(const string& name, float price);
};

#endif

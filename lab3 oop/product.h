#ifndef PRODUCT_H
#define PRODUCT_H

#include "item.h"

using namespace std;

class Product : public Item
{
public:
    Product(const string& name, float price);
};

#endif

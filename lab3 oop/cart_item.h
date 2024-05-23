#ifndef CART_ITEM_H
#define CART_ITEM_H

#include "item.h"

using namespace std;

class CartItem : public Item
{
public:
    CartItem(const string& name, float price);
};

#endif

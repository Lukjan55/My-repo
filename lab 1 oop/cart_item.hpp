#ifndef CART_ITEM_HPP
#define CART_ITEM_HPP

#include "item.hpp"

using namespace std;

class CartItem : public Item 
{
public:
    CartItem(const string& name, float price);
};

#endif

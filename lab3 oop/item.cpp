#include "item.h"

using namespace std;

Item::Item(const string& name, float price) : name(name), price(price) {}

string Item::getName() const
{
    return name;
}

float Item::getPrice() const
{
    return price;
}

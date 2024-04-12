#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

using namespace std;

class Item 
{
protected:
    string name;
    float price;
public:
    Item(const string& name, float price);
    virtual string getName() const;
    virtual float getPrice() const;
    virtual ~Item() = default; 
};

#endif 

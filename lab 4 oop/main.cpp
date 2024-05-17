#include "pch.h"
//#include "product.hpp"
//#include "linked_product_catalog.hpp"
//#include <iostream>
//#include <limits>
//#include <iomanip>
//
//using namespace std;
//
//int main() 
//{
//    ProductCatalog catalog;
//
//    catalog.addProduct(Product("Lawn mower", 25000));
//    catalog.addProduct(Product("Chainsaw", 5600));
//    catalog.addProduct(Product("Hedge trimmer", 3520));
//    catalog.addProduct(Product("Plant care tool set", 7400));
//    catalog.addProduct(Product("Brush cutter", 4800));
//    catalog.addProduct(Product("Leaf blower", 3000));
//
//
//    cout << "Welcome to our gardening store!\n\n";
//
//    while (true) {
//        cout << "1. Display products\n";
//        cout << "2. Buy a product\n";
//        cout << "3. Display cart\n";
//        cout << "4. Total cost\n";
//        cout << "5. Exit\n";
//        cout << "6. Remove a product from cart\n";
//        cout << "\nChoose an option: ";
//
//        int choice;
//        cin >> choice;
//
//        if (choice == 1) 
//        {
//            catalog.displayProducts();
//        } 
//        else if (choice == 2) 
//        {
//            string productName;
//            
//            cout << "\nEnter the name of the product you want to buy: ";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//            getline(cin, productName);
//            catalog.buyProduct(productName);
//        } 
//        else if (choice == 3) 
//        {
//            catalog.displayCart();
//        } 
//        else if (choice == 4) 
//        {
//            cout << "\nTotal cost: " << fixed << setprecision(2) << catalog.getTotalCost() << " UAH\n\n";
//        } 
//        else if (choice == 5) 
//        {
//            cout << "\nThank you for visiting our store. Goodbye!\n";
//            break;
//        } 
//        else if (choice == 6) 
//        {
//            string productName;
//
//            cout << "\nEnter the name of the product you want to remove from the cart: ";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//            getline(cin, productName);
//            catalog.removeFromCart(productName);
//        } 
//        else 
//        {
//            cout << "\nInvalid choice. Please try again.\n\n";
//        }
//    }
//
//    return 0;
//}

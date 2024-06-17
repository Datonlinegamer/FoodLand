#include "Menu.h"

#include <iostream>
#include <string>
using namespace std;

enum MenuItems 
{
    Pizza = 1,
    CheeseBurger =2,
    ChickenSandwich =3
};

    double Price;
    double Money;
    double Change;
    const double PizzaPrice = 5.00;
    const double CheeseBurgerPrice = 3.00;
    const double ChickenSandwichPrice = 2.00;


void FoodLand::Menu()
{
    string menu = "1 Pizza,\n2 CheeseBurger, \n3 Chicken Sandwich";
    int OrderNumber;

    cout << "Welcome to FoodLand!" << '\n'
        << "What would you like to order: \nPress 1, 2, or 3:" << '\n'
        << menu << endl;

    cout << "\n1) Pizza:\t"<<PizzaPrice <<".00" << endl;
    cout << "\n2) CheeseBurger:\t"<< CheeseBurgerPrice <<".00" << endl;
    cout << "\n3) Chicken Sandwich:\t "<< ChickenSandwichPrice<<".00" << endl;

    cin >> OrderNumber;

    switch (OrderNumber)
    {
    case Pizza:
        Price = PizzaPrice;
        cout << "You ordered a Pizza. The price is: $5.00" << endl;
        break;
    case CheeseBurger:
        Price = CheeseBurgerPrice;
        cout << "You ordered a CheeseBurger. The price is: $3.00" << endl;
        break;
    case ChickenSandwich:
        Price = ChickenSandwichPrice;
        cout << "You ordered a Chicken Sandwich. The price is: $2.00" << endl;
        break;
    default:
        cout << "Invalid selection!" << endl;
        return;
    }

    cout << "Please enter your payment: "<<endl;
    cin >> Money;

    Change = Money - Price;

    if (Money > Price)
    {
        cout << "Your change is: $" << Change << endl;
    }
    else if (Money == Price) 
    {
        cout << "You paid the exact amount." << endl;
    }
    else 
    {
        cout << "Insufficient funds!" << endl;
    }
}



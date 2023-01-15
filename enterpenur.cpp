#include <iostream>
using namespace std;
float price1(string city, string  product, int quantity);
main()
{
    string product;
    string city;
    int quantity;
    float price, result;
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Product: ";
    cin >> product;
    cout << "Enter Quantity: ";
    cin >> quantity;
    result = price1 (city, product, quantity);
    cout << result;
}
float price1(string city, string product, int quantity)
{
    float price;
    if (city == "sofia")
    {
        if (product == "cofee")
        {
            price = quantity * 0.50;
        }
        if (product == "water")
        {
            price = quantity * 0.80;
        }
        if (product == "beer")
        {
            price = quantity * 1.20;
        }
        if (product == "sweets")
        {
            price = quantity * 1.45;
        }
        if (product == "peanuts")
        {
            price = quantity * 1.60;
        }
    }

    if (city == "plodiv")
    {
        if (product == "cofee")
        {
            price = quantity * 0.40;
        }
        if (product == "water")
        {
            price = quantity * 0.70;
        }
        if (product == "beer")
        {
            price = quantity * 1.15;
        }
        if (product == "sweets")
        {
            price = quantity * 1.30;
        }
        if (product == "peanuts")
        {
            price = quantity * 1.50;
        }
    }
    if (city == "varna")
    {
        if (product == "cofee")
        {
            price = quantity * 0.45;
        }
        if (product == "water")
        {
            price = quantity * 0.70;
        }
        if (product == "beer")
        {
            price = quantity * 1.10;
        }
        if (product == "sweets")
        {
            price = quantity * 1.35;
        }
        if (product == "peanuts")
        {
            price = quantity * 1.55;
        }
    }
    return price;
}
#include <iostream>
using namespace std;
float rial(float budget, string category, int number_of_people);
main()
{
    float result;
    float budget;
    string category;
    int number_of_people;
    float total_ticket_price;
    float total_budget;
    float answer;
    cout << "Enter Budget: ";
    cin >> budget;
    cout << "Enter Category: ";
    cin >> category;
    cout << "Number of People: ";
    cin >> number_of_people;
    result = rial(budget, category, number_of_people);
    cout << result;
}
float rial(float budget, string category, int number_of_people)
{
    float answer,  total_ticket_price, total_budget;
    if (number_of_people == 1 && number_of_people <= 4)
    {
        if (category == "vip")
        {
            total_ticket_price = (number_of_people * 499.99);
            total_budget = (budget - (budget * 75 / 100));
            answer = total_budget - total_ticket_price;
            return answer;
        }
        if (category == "normal")
        {
            total_budget = (budget - (budget * 75 / 100));
            total_ticket_price = number_of_people * 249.99;
            answer = total_budget - total_ticket_price;
            return answer;
        }
    }

    if (number_of_people >= 5 && number_of_people <= 9)
    {
        if (category == "vip")
        {
            total_ticket_price = number_of_people * 499.99;
            total_budget = budget - (budget * 60 / 100);
            answer = total_budget - total_ticket_price;
            return answer;
        }
        if (category == "normal")
        {
            total_budget = (budget - (budget * 60 / 100));
            total_ticket_price = number_of_people * 249.99;
            answer = total_budget - total_ticket_price;
            return answer;
        }
    }

    if (number_of_people >= 10 && number_of_people <= 24)
    {
        if (category == "vip")
        {
            total_ticket_price = number_of_people * 499.99;
            total_budget = budget - (budget * 50 / 100);
            answer = total_budget - total_ticket_price;
            return answer;
        }
        if (category == "normal")
        {
            total_budget = (budget - (budget * 50 / 100));
            total_ticket_price = number_of_people * 249.99;
            answer = total_budget - total_ticket_price;
            return answer;
        }
    }

    if (number_of_people >= 25 && number_of_people <= 49)
    {
        if (category == "vip")
        {
            total_ticket_price = number_of_people * 499.99;
            total_budget = budget - (budget * 40 / 100);
            answer = total_budget - total_ticket_price;
            return answer;
        }
        if (category == "normal")

        {
            total_budget = (budget - (budget * 40 / 100));
            total_ticket_price = number_of_people * 249.99;
            answer = total_budget - total_ticket_price;
            return answer;
        }
    }

    if (number_of_people >= 50)
    {
        if (category == "vip")
        {
            total_ticket_price = number_of_people * 499.99;
            total_budget = budget - (budget * 25 / 100);
            answer = total_budget - total_ticket_price;
            return answer;
        }
        if (category == "normal")
        {
            total_budget = budget - (budget * 25 / 100);
            total_ticket_price = number_of_people * 249.99;
            answer = total_budget - total_ticket_price;
            return answer;
        }
    }
    return answer;
}

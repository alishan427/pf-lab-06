#include <iostream>
using namespace std;

main()
{
    int age;
    char g;
    string answer;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter Gender";
    cin >> 'g';

    if (age >= 16 && g == 'm')
    {   answer = "Mr. ";
        cout << answer;
    }

    if (age < 16 && g == 'm')
    {
        answer = "Master ";
        cout << answer;
    }

    if (age >= 16 && g == 'f')
    {
       answer = "MS.";
       cout << answer;
    }

    if (age < 16 && g == 'f')
    {    
        answer = "Miss ";
         cout << answer;
    }
}
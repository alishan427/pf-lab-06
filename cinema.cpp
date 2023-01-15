#include <iostream>
using namespace std;
float incomee(string screen_name, int number_of_rows, int number_of_columns);
main()
{
    string screen_name;
    int number_of_rows;
    int number_of_columns;
    int Total_Members;
    float result, answer;
    cout << "Enter Screen Name: ";
    cin >> screen_name;
    cout << "Enter Number of Rows: ";
    cin >> number_of_rows;
    cout << "Enter Number of Columns: ";
    cin >> number_of_columns;
    Total_Members = number_of_rows * number_of_columns;
    result = incomee(screen_name, number_of_rows, number_of_columns);
    cout << result;
}
float incomee(string screen_name, int number_of_rows, int number_of_columns)
{
    float answer;
    int Total_Members;
    if (screen_name == "priemere")
    {
        answer = Total_Members * 12;
    }
    if (screen_name == "normal")
    {
        answer = Total_Members * 7.50;
    }
    return answer;
}

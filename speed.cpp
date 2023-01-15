#include <iostream>
using namespace std;
string speeed(int speed);

main()
{
    float speed;
    string result;
    cout << "Enter Speed: ";
    cin >> speed;
    result =  speeed(speed);
    cout << result;
}
string speeed(int speed)
{   
    string answer;
    if (speed < 10)
    {
        answer = "Slow ";
    }

    if (speed >= 10 && speed <= 50)
    {
        answer =  "Average ";
    }

    if (speed >= 50 && speed <= 150)
    {
        answer =  "Fast ";
    }

   if  (speed >= 150 && speed <= 1000)
    {
        answer =  "Ultra Fast ";
    }
    if  (speed > 1000)
    {
        answer =  "Extremely Fast ";
    }
    return answer;
}

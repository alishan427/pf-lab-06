#include <iostream>
using namespace std;
float cheapest(float kilometers, string time);
main()
{
  float kilometers;
  string time;
  float result;
  cout << " Enter kilometers to travel: ";
  cin >> kilometers;
  cout << "Enter Time period to travel: ";
  cin >> time;
  result = cheapest(kilometers, time);
  cout << result;
}

float cheapest(float kilometers, string time)
{
  float price;
  if (kilometers <= 20 && time == "day")
  {
    price = (kilometers * 0.79 + 0.70);
  }
  if (kilometers <= 20 && time == "night")
  {
    price = (kilometers * 0.90 + 0.70);
  }

  if ((kilometers >= 20 && kilometers < 100) && time == "day")
  {

    price = (kilometers * 0.09);
  }

  if ((kilometers >= 20 && kilometers < 100) && time == "night")
  {
    price = (kilometers * 0.09);
  }

  if (kilometers >= 100)

  {
    if (time == "day")
    {
      price = kilometers * 0.06;
    }

    if (time == "night")
    {
      price = kilometers * 0.06;
    }
  }
  return price;
}
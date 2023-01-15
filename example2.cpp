#include <iostream>
using namespace std;
main ()
{
int price;
string brand_name;
cout << "Enter price: ";
cin >> price;
cout << "Enter Brand: ";
cin >> brand_name;
if (price <= 1500 && brand_name == "outfitters") 
  cout << "Good!" << endl;    
 
 else
 {
  cout << "Not Good!" << endl;    
 }

}
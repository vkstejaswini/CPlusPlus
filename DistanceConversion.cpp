#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,f;
cout<<"Enter the distance (in km):";
cin>>a;
b = a * 1000;
c = b * 3.28;
d = c * 12;
f = d * 30;
cout<< b;
cout<< "\nDistance in feets "<<c;
cout<<"\nDistance in inches "<<d;
cout<<"\nDistance in centimeters"<<f;
cout<< "\n\npress any key to close.";

return 0;
}

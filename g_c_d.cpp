/* 3. Write a function named "g_c_d" that takes two positive integer arguments and returns as its value the greatest common divisor of those two integers. If the function is passed an argument that is not positive (i.e., greater than zero), then the function should return the value 0 as a sentinel value to indicate that an error occurred.
For example,
cout << g_c_d(40,50) << endl; // will print 10
cout << g_c_d(256,625) << endl; // will print 1
cout << g_c_d(42,6) << endl; // will print 6 12
cout << g_c_d(0,32) << endl; // will print 0 (even though 32 is the g.c.d.)
cout << g_c_d(10,-6) << endl; // will print 0 (even though 2 is the g.c.d.)
*/
#include <iostream>
//#include <cstdlib>
using namespace std;

int g_c_d (int a, int b)
{
if (a <= 0 || b <= 0) // a parameter is not positive
return 0; // exit and return the error sentinel
int temp;
temp = ( a <= b ? a : b ); // set it to the smaller
while (a % temp != 0 || b % temp != 0)
--temp;
return temp;
}

int main(){
 int n1, n2;
 cout<<"enter two value";
 cin>>n1>>n2;
 cout<<g_c_d(n1, n2)<<endl;
 //system("pause");
 //return EXIT_SUCCESS;
}

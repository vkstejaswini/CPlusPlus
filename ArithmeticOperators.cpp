#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a,b;
    cout << "enter values of a and b" << endl;
    cin>> a >> b;
    cout << a << "+ " <<b<< "= " <<a+b << endl;
    cout << a << "- " <<b<< "= " <<a-b << endl;
    cout << a << "* " <<b<< "= " <<a*b << endl;
    cout << a << "/ " <<b<< "= " <<a/b << endl;// make sure that denominator should not be 0
    cout << a << "% " <<b<< "= " <<a%b << endl;// displays reminder
    return 0;
}

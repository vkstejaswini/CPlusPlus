/*1. Write a function named "sum_from_to" that takes two integer arguments, call them "first" an "last", and returns as its value the sum of all the integers between first and last inclusive.
For example,
cout << sum_from_to(4,7) << endl; // will print 22 because 4+5+6+7 = 22
cout << sum_from_to(-3,1) << endl; // will print -5 'cause (-3)+(-2)+(-1)+0+1 = -5
cout << sum_from_to(7,4) << endl; // will print 22 because 7+6+5+4 = 22
cout << sum_from_to(9,9) << endl; // will print 9*/
#include <iostream>

using namespace std;
int Sum_from_to(int first, int last){

int i,sum=0;
if(first<=last){
    for(i=first;i<=last;i++){

    sum=sum+i;
}

}
if(last<=first){
    for(i=last;i<=first;i++){

    sum=sum+i;
}

}
if(first==last){
    sum=first;
}
return sum;

}

int main()
{
    do{
            int a,b,x;
    cout<<endl<<"enter first number:";
    cin>>a;
    cout<<endl<<"enter last number:";
    cin>>b;
    x = Sum_from_to(a,b);
    cout<<endl<<"the sum from "<<a<<" to "<<b<<"  is: "<<x ;

    }while(true);
    //cout << "Hello world!" << endl;
    return 0;
}

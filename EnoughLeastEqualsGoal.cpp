/*2. Write a function named "enough" that takes one integer argument, call it "goal" and returns as its value the smallest positive integer n for which 1+2+3+. . . +n is at least equal to goal .
For example,
cout << enough(9) << endl; // will print 4 because 1+2+3+4 9 but 1+2+3<9
cout << enough(21) << endl;// will print 6 'cause 1+2+ . . .+6 21 but 1+2+ . . . 5<21
cout << enough(-7) << endl;// will print 1 because 1 -7 and 1 is the smallest // positive integer
*/
#include <iostream>

using namespace std;
int enough(int goal){
    int i,sum=0;

         for(i=1;i<=goal;i++){
                sum=sum+i;
        if(sum<goal){
                continue;
    }if(sum>=goal){
    break;
    }


    }
    return i;

}
int main()
{
    int n,x;
    cout<<"enter the number: ";
    cin>>n;
    x=enough(n);
    cout<<endl<<"least enough number is: "<<x<<endl;
        //cout << "Hello world!" << endl;
    return 0;
}

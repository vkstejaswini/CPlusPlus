#include <iostream>

using namespace std;

int main()
{
    int n,large=0,i,x;
    cout << "enter the numbers to be compared:";
    cin >> n;
    for(i=0;i<n;i++){

        cout << "enter " << i << " value:" << endl;
        cin >> x;
        if(x>large){
            large=x;

        }

    }
    cout << large;
    return 0;
}

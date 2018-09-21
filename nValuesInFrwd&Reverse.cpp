/*4. Write a program to prompt the user to input n integer values and print these values in forward and reversed orde.
For example:
Enter the value for N : 6
Please enter any 6 numbers: 12 45 78 4 99 64
Your numbers forward:
4
12
45
64
78
99
Your numbers reversed:
99
78
65
45
12
4*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int* a,i,n,j,temp;
    cout<<"enter n value";
    cin>>n;
    cout<<endl;
    a=(int*)malloc(n*sizeof(int));
    cout<<"enter the"<< n<< "values"<<endl;
    for(i=0;i<=n;i++){

        cin>>a[i];
        cout<<endl;

    }
    cout<<"the numbers you entered are:"<<endl;
    for(i=0;i<=n;i++){

        cout<<a[i]<<endl;

    }

    cout<<"the reverse order is: "<<endl;
     for(i=n;i>=0;i--){




        cout<<a[i]<<endl;

    }
    cout<<"numbers in ascending order:"<<endl;
    for(i=0;i<=n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(j=0;j<=n;j++){




        cout<<a[j]<<endl;

    }

    cout<<"numbers in descending order:"<<endl;
     for(j=n;j>=0;j--){




        cout<<a[j]<<endl;

    }



    return 0;
}

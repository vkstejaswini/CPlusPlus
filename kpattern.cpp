#include <iostream>

using namespace std;

int main()
{

    char a[5]={'h','e','l','l','o'};
    int i,j;


for(i=4;i>0;i--){



            for(j=0;j<=i;j++){
                cout <<a[j];
            }
            cout<<endl;

    }

    for(i=0;i<=4;i++){


        if(i<=4){
            for(j=0;j<=i;j++){
                cout <<a[j];
            }
            cout<<endl;
        }
    }

    return 0;
}

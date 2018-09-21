#include<iostream>
#include<string.h>
using namespace std;
int main()

{
    char a[50],b[20],c[20];
    int i,j=0,l=0;
    cout<<"enter";
    cin>>a;
   // gets(a);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]!=32 && a[i]!='\0')
        {

        b[j++]=a[i];
    }
        else
        {
            b[j]='\0';
            if(strlen(b)>l)
            {
                strcpy(c,b);
                l=strlen(b);
            }
            j=0;
        }
    }
    cout<<"The longest word is:"<<c;
    //puts(c);

}

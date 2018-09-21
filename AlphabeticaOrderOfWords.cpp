#include<iostream>
#include<cstring>
using namespace std;
int main(){
char name[10][10],temp[10];
int i,j,n;
cout<<"enter the number of strings:";
cin>>n;
for(i=0;i<n;i++){

    cout<<"enter the input string "<<i<<":";
   cin>>name[i];

}
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(strcmp(name[j],name[j+1])>0){
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
    }
}
cout<<"the strings after sorting is:"<<endl;
for(i=0;i<n;i++){
    cout<<name[i]<<" ";
}

return 0;
}

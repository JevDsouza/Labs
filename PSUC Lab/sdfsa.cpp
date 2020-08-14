#include<iostream>
using namespace std;
main()
{int m, pos, ele, j;
char a[50];
    cout<<"enter mat";
    cin>>m;

for(int i=0; i<m; i++)
    cin>>a[i];
for(int i=0; i<m; i++)
    cout<<a[i]<<"\t";
for(int i=0, j=m-1; i<m/2;j--, i++)
   {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
   }
   cout<<"Rev";
   for(int i=0; i<m; i++)
    cout<<a[i]<<"\t";
   cout<<"Enter pos ele";
   cin>>pos>>ele;
   for(int i=pos-1; i>=m-1; i++)
   {
       a[i-1]=a[i];
       m=m-1;}
       cout<<"Insert";
       for(int i=0; i<m; i++)
    cout<<a[i]<<"\t";

   }


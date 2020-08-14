#include<iostream>
using namespace std;
main()
{

int a[20][20], m, n, flag=0;
cout<<"Enter the dimensions of matrix";
cin>>m>>n;
cout<<"Enter the matrix";
for(int i=0;i<m;i++)
{
   for(int j=0; j<n;j++)
   {
       cin>>a[i][j];
   }
}
cout<<endl<<"matrix"<<endl;
for(int i=0;i<m;i++)
{
   for(int j=0; j<n;j++)
   {
      cout<<a[i][j]<<"\t";
   }
   cout<<endl;
}

for (int i=0; i<m; i++)
{
    for (int j=0; j<n; j++)

{
if(a[i][j]!= a[j][i])
    flag=1;}
}
if (flag==0)
    cout<<"The given matrix is symmetric";
else
    cout<<"the given matrix is not symmetric";
}


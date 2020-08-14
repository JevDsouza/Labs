#include<iostream>
using namespace std;
int main()
{
  int a[5][5];
  int temp;
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<3;i++)
  {
  for(int j=0;j<3;j++)
  cin>>a[i][j];
  }
  for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   {
   if(i==j)
   {
   temp=a[i][j];
   a[i][j]=a[i][3-i-1];
   a[i][3
   -i-1]=temp;
   }
   }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
 }

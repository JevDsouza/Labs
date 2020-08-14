#include<iostream>
using namespace std;
int main()
{
 int a[3][3],b[3][3];
 int k=1;int temp=0;
 cout<<"Enter the array elements"<<endl;
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  cin>>a[i][j];
 }
 for(int j=0;j<3;j++)
 {
   temp=a[0][j];
   a[0][j]=a[1][j];
   a[1][j]=temp;
 }
cout<<"Row exchange"<<endl;
for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  cout<<a[i][j]<<" ";
  cout<<endl;
 }
 cout<<"Column exchange"<<endl;
 for(int i=0;i<3;i++)
  {
   temp=a[i][1-1];
   a[i][1-1]=a[i][2-1];
   a[i][2-1]=temp;
   }
for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  cout<<a[i][j]<<" ";
  cout<<endl;
 }

}


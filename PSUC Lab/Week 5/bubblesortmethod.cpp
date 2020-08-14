#include<iostream>
using namespace std;
int main()
{
 int n;
 int arr[100];
 int k;
 cout<<"Enter number of elements required"<<endl;
 cin>>n;
 cout<<"Enter the numbers"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-i-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
   k=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=k;
   }
  }
 }
cout<<"The sorted array is: ";
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
}


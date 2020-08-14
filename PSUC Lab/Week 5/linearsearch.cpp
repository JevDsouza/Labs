#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of elements of the array"<<endl;
 cin>>n;
 int arr[n];
 cout<<"Enter the array elements"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 int k;
 cout<<"Enter the number to be searched"<<endl;
 cin>>k;
 int count=0;
 for(int i=0;i<n;i++)
 {
  if(k==arr[i])
  {
  cout<<"Number found at position: " <<i+1;
  count=1;
  break;
  }
  else;
 }
 if(count==0)
 cout<<"Number not found";
}


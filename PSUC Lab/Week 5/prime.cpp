#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int A[10],n;
   cout<<"Enter no. of elements in the array: ";
   cin>>n;
   cout<<"Enter elements of the array: ";
   for( int i=0; i<n; i++)
      cin>>A[i];
   for( int j=0; j<n-1; j++)
      for( int k=0; k<n-j-1; k++)
         if(A[k]>A[k+1])
         {
            int temp=A[k];
            A[k]=A[k+1];
            A[k+1]=temp;
         }
   cout<<"The prime nos in the array are:\n";
   for (int z=0; z<n; z++)
   {
      int flag=0;
      for(int j=2; j<=sqrt(A[z]); j++)
         if(A[z]%j==0)
            flag++;
      if(flag==0)
         cout<<A[z]<<" ";
   }

}

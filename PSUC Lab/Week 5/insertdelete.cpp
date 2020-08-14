#include<iostream>
using namespace std;
int main()
{
   int A[10],n,data,pos,x;
   char ch;
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
   cout<<"Enter '1' for Insertion and '2' for Deletion: ";
   cin>>ch;
   switch (ch)
   {
       case '1': cout<<"Enter element to be added: ";
               cin>>data;
               for( x=0; x<n; x++)
                  if( data<A[x])
                     break;
               pos=x+1;
               for(int y=n; y>=pos; y--)
                  A[y]=A[y-1];
               A[pos-1]=data;
               n++;
               break;
       case '2': cout<<"Enter position at which the element has to be deleted: ";
               cin>>pos;
               for(int i=pos-1; i<n; i++)
                  A[i]=A[i+1];
               n--;
               break;
   }
   cout<<"The new sorted array is:\n";
   for (int z=0; z<n; z++)
      cout<<A[z]<<" ";
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int A[10],n;
    cout<<" Enter the number of elements in array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for(int i=0; i<n; i++)
        cin>>A[i];
    for (int j=0; j<n-1; j++)
        for (int k=0; k<n-j-1; k++)
    if(A[k]>A[k+1])
    {
        int temp= A[k];
        A[k]= A[k+1];
        A[k+1]= temp;

    }
    cout<<"The sorted array is: \n ";
    for(int z=0; z<n; z++)
        cout<<A[z]<<"   ";
        cout<<endl;
        cout<<"The smallest element is: "<<A[0]<<endl;
        cout<<"The largest element is: "<<A[n-1]<<endl;
}


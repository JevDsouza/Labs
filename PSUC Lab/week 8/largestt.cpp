#include<iostream>
using namespace std;
int largest(int a[],int n)
{
    int maxi=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>maxi)
            maxi=a[i];
    }
    return maxi;
}
int main()
{
    int a[100],n;
    cout<<"enter length:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter number "<<(i+1)<<" :";
        cin>>a[i];
    }
    int large=largest(a,n);
    cout<<"largest num :"<<large;
    return 0;
}

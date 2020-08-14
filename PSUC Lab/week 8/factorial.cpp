#include<iostream>
using namespace std;
double f;
int fact(int a)
{

 int f=1;
 for(int i=1;i<=a;i++)

 f=f*i;
 return (f);
}
int main()
{
    int n,r;
    cout<<"Enter the value of n, r for finding nCr"<<endl;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<< fact(n)/ (fact(n-r)*fact(r));
}

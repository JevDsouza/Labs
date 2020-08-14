#include<iostream>
#include<math.h>
using namespace std;
main()
{
    float p, r, n, c;
    cout<<"Enter the principle";
    cin>>p;
    cout<<"Enter the time";
    cin>>n;
    cout<<"Enter Rate of interest: ";
    cin>>r;
    c= p*pow(1+r/100,n)- p;
    cout<<"The Compound interest is: ";
    cout<<c;
}

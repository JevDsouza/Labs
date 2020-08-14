#include<iostream>
using namespace std;
main()
{
    int h, g, s, m, sec;
    cout<<" Enter the seconds";
    cin>>s;
    h= s/3600;
    cout<<" number of hours: ";
    cout<<h<<"\n";
    g=s%3600;
    m=g/60;
    cout<<"Number of minutes is: ";
    cout<<m<<"\n";
     sec= g%60;
    cout<<"The number of seconds are : ";
    cout<<sec;
}

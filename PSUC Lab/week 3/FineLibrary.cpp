#include<iostream>
using namespace std;
main()
{
int a;
cout<<"Enter the number of days";
cin>>a;
if(a<5)
cout<<" No fine";
else if (a==5)
cout<<"Fine is Rs 0.50";
else if (a>=6 && a<=10)
cout<<"Fine is Rs 1.00";
else if (a>10 && a<=30)
cout<<"Fine is Rs 5.00";
else if (a>= 30)
cout<<"Fine is Rs 10.00";
}


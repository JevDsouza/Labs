#include<iostream>
using namespace std;
main()
{
float a, b, c, d, s;
cout<<" Enter the money containing denominations in 20 : ";
cin>> a;
cout<<" Enter money in denominations of rupees 10: ";
cin>> b;
cout<<" Enter money in denominations of ruppees 5: ";
cin>> c;
cout<<"Enter money in denominations of 50 paise : ";
cin>> d;
s= a*20+ b*10+ c*5 + d*0.5;
cout<<" The total amount is: ";
cout<<s;
}

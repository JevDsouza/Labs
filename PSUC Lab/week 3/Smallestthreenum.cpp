#include<iostream>
using namespace std;
main()
{
    int a, b, c;
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
    if (a<b && a<c)
        cout<<"The first number is smallest ie:"<<a;
    else if (b<c && b<a)
        cout<<"The second number is smallest ie: "<<b;
    else
        cout<<"The third number is smallest ie. : "<<c;
}

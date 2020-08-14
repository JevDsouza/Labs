#include<iostream>
using namespace std;
main()
{
    int a, b, c;
    cout<<"Enter three numbers";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c)
    {
        cout<<"The first number is greater i.e.: "<<a;

    }
    else if(b>a&&b>c)
        cout<<"The second number is greater, i.e.: "<<b;
    else
        cout<<"The third number is greater i.e.: "<<c;

}

#include<iostream>
using namespace std;
main()
{
    float r, a, v;
    cout<<"Enter the Radius of the sphere: ";
    cin>>r;
    a= 4*3.14*r*r;
    v= 4*3.14*r*r*r/3;
    cout<<"The surface area of the sphere is: ";
    cout<<a<<"\n";
    cout<< "The volume of the sphere is: ";
    cout<<v;

}

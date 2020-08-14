#include<iostream>
#include<math.h>
using namespace std;
main()
{
float a,b,c, r1, r2, det;
cout<<"Put The values of a, b, c:";
cin>>a>>b>>c;
//calculating determinant
det= pow(b,2)-4*a*c;
r1=(-b)/(2*a);
r2= pow(fabs(det),0.5)/(2*a);
if (det<0)
{

    cout<<"root 1= " <<r1;
    cout<<"+i"<<"\n";
    cout<<"root 2= " <<r2;
    cout<<"-i";
}
else if (det>0)
{
    cout<<"root 1= " <<r1<<"+1"<<r2<<"\n";
    cout<<"root 2= " <<r1<<"-1"<<r2;

}
else
{
    cout<<"root 1 and root 2= " <<r1;
}
}


#include<iostream>
#include<math.h>
using namespace std;
main ()
{
    int a,b,c,d;
    float det, root1, root2, r1, r2;
    cout<<"Enter a, b,c\n";
    cin>>a>>b>>c;
    det=pow(b,2)-4*a*c;
    r1=-b/2*a;
    r2=(pow(fabs(det),0.5))/(2*a);
    if(det<0)
    {
        d=1;
    }

        else if (det==0)
        {
            d=2;

        }
 else {d=3;}

 switch (d)
{


  case 1:
      {


     cout<<"Imaginary roots\n";
     cout<<r1<<"+i"<<r2<<"and"<<r1<<"-i"<<r2;
 break;
 }
  case 2:

  {

   cout<<"real and equal roots"<<"\n";
    cout<<r1<<"and"<<r1;
    break;

 }
case 3:
{
    cout<<"real and unequal roots\n";
    cout<<r1+r2<<endl;
    cout<<r1-r2;

}
}
}



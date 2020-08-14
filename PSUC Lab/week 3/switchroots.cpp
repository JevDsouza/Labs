#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
   float a,b,c,re,root1,root2,im,disc;
   int d;
   cout<<"Enter values for a ,b and c :";
   cin>>a>>b>>c;
   disc=pow(b,2)-(4*a*c);
   if(disc<0)
      d=1;
   if(disc==0)
      d=2;
   if(disc>0)
      d=3;
    switch(d)
     {
        case 1: re=(-b)/(2*a);
                im=pow(-disc,0.5)/(2*a);
                cout<<"Root 1 :"<<re<<"+i"<<fabs(im);
                cout<<"\nRoot 2 :"<<re<<"-i"<<fabs(im);
                break;
        case 2: re=(-b)/(2*a);
                cout<<"Root 1 =Root 2 ="<<re;
                break;
        case 3: root1=(-b+sqrt(disc))/(2*a);
                root2=(-b-sqrt(disc))/(2*a);
                cout<<"Root 1:"<<root1<<"\nRoot 2:"<<root2;
                break;
      }
    return 0;
  }



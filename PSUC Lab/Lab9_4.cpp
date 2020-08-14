#include<iostream>
using namespace std;

int Prod(int,int);

int main()
{
    int a,b,res;
    cout<<"Enter any 2 numbers you want to multiply: "<<endl;
    cin>>a>>b;
    res=Prod(a,b);
    cout<<"The multiplication of "<<a<<" & "<<b<<" is: "<<res;
    return 0;
}
int Prod(int a,int b)
{
  if(b>a)
    {
        return Prod(b,a);
    }
    else if(b!=0)
    {
        return (a+Prod(a,b-1));
    }
    else
    {
        return 0;
    }
}

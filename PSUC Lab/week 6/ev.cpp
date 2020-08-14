#include <iostream>
using namespace std;
main()
{
int num, dig, no=0, count=0;
cout<<"enter num";
cin>>num;
while(num!=0)
{dig=num%10;
++no;
}
if (dig%2==0)
++count;
num= num/10;
{


if (no==count)
cout<<"ev";
else if (count==0)
cout<<"odd";
else
cout<<"Neither ev nor od";
}

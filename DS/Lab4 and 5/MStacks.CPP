#include <iostream>
#include <conio.h>
using namespace std;
enum Boolean{FALSE,TRUE};
class Mstacks
{
public:
    int top[20];
    int bound[20];
    int a[200];
    int m ,n;
    void disp(int sn);
    Mstacks(int max1 ,int n1)
    {
	m=max1;
	n=n1;
	for(int i=0;i<n;i++)
	{
	    top[i]=(m/n)*i-1;
	    bound[i]=(m/n)*(i)-1;
	}
    }
    Mstacks()
    {
	n=1;
	m=10;
    }
    Boolean isEmpty(int sn);
    Boolean isFull(int sn);
    int pop(int sn);
    void push(int sn,int x);
};
Boolean Mstacks :: isEmpty(int sn)
{
    if(top[sn]== (m/n)*sn-1)
    {
	return TRUE;
    }
    else{
	return FALSE;
    }
}
Boolean Mstacks :: isFull(int sn)
{
    if(top[sn]==bound[sn+1])
    {
	return TRUE;
    }
    else{
	return FALSE;
    }
}
void Mstacks::push(int ele,int i)
{
if(top[i]==bound[i+1]||top[i]==m-1)
cout<<"\nStack is full";
else
a[++top[i]]=ele;
}
int Mstacks :: pop(int sn)
{
    if(isEmpty(sn))
    {
	cout<<"Underflow"<<endl;
    }
  else
	{
	    return a[--top[sn]];
	}
}

void Mstacks::disp(int sn)
{
    if(isEmpty(sn))
	{
	    cout<<"\nStack is empty";
	 }
	 else
	    for(int k=bound[sn]+1;k<=top[sn];k++)
	    {cout<<a[k]<<"\t";}
}
int main()
{
     Mstacks ms;int ch,m,n,i,ele;
    cout<<"\nenter the maximum size of the array:";
    cin>>m;
    cout<<"\nenter the no. of stack:";
    cin>>n;
    ms=Mstacks(m,n);
    do
	{
	    cout<<"\n1.Push\n2.Pop\n3.display\n0.exit";
	    cout<<"\nenter your choice:";
	    cin>>ch;
	    switch(ch)
	    {
		case 1: cout<<"\nEnter the index of the stack:";
		cin>>i;
		cout<<"\nEnter the element to be inserted:";
		cin>>ele;
		ms.push(ele,i);
		break;
		case 2: cout<<"\nEnter the index of the stack:";
		cin>>i;
		cout<<ms.pop(i);
		break;
		case 3: cout<<"\nEnter the index of the stack:";
		cin>>i;
		ms.disp(i);
		break;
		case 0: break;
		default: cout<<"\nInvalid input";
		}
	}while(ch!=0);
	getch();
}


#include<iostream>
using namespace std;
int fib(int N)
{
    if(N==0||N==1)
        return N;
    else
        return(fib(N-1)+fib(N-2));
}
int main()
{
    int n, i=0;
    cout<<"Enter the number of series required: ";
    cin>>n;
    while(i<n)
    { cout<<" "<<fib(i);
        i++;
    }
    return 0;
}

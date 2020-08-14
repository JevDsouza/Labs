#include<iostream>
using namespace std;
main()

{
    int a, n, b, sum=0;
    cout<<"Enter the number to be checked";
    cin>>n;
    b=n;
    while(b>0)
       {

        a= b%10;
        b= b/10;
        sum= sum*10+a;
       }

    if (sum==n)
        cout<<"The given number is a palindrome";
    else if (sum!= n)
        cout<<"The given number isn't a palindrome.";

}

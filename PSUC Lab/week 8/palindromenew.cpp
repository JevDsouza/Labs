#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool isPalin(char s[],int l)
{
    bool value=true;
    for(int i=0,k=l-1;i<l/2;i++,k--)
    {
        if(s[i]!=s[k])
        {
            value=false;
            break;
        }
    }
    return value;
}
int main()
{
    char s[100];
    cout<<"enter string :";
    gets(s);
    int l=strlen(s);
    if(isPalin(s,l))
        cout<<"palindrome";
    else
        cout<<"not Palindrome";
    return 0;

    //cout<<isPalin("madam",5);
    //cout<<isPalin("maddam",6);
    //cout<<isPalin("hello",5);
}

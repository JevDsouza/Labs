#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char s[50],t[50];
  int count=0,i,j,n,flag=0;

  cout<<"Enter the string: ";
  gets(s);
   n=strlen(s);

   for(i=0;i<n;i++)
     if(s[i]!=s[n-i-1])
     {
         flag=1;
         break;

     }



   if(flag==0)
      cout<<"\nIt is a palindrome.";
    else
       cout<<"\nIt is not a palindrome.";
   return 0;
  }


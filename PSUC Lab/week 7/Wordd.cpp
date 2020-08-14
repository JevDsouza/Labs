//Program to count the number of words in a string
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char s[50];
  int count=0,i,j,n;

  cout<<"Enter the string: ";
  gets(s);
   n=strlen(s);
   for(i=0;i<=n;i++)
      if(s[i]==' '&&s[i-1]!=' ')
       count+=1;
  cout<<"Number of words are "<<count+1;
  return 0;

}

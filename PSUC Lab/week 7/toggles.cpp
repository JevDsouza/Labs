//Program to count the number of words in a string
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char s[50];
  int i;

  cout<<"Enter the string: ";
  gets(s);
   for(i=0;s[i]!='\0';i++)
      if(s[i]>='a' && s[i]<='z')
      s[i]=s[i]-32;
      else if (s[i]>='A' && s[i]<='Z')
        s[i]= s[i]+32;

  cout<<"Toggled letters are: "<<s;
  return 0;

}

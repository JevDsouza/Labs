#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int length(char [50]);
void concat(char[50], char[50],int,int);
void main()
{
 char str1[50],str2[50],ch;
 int i, l,le;
 cout<<"\n Enter the first string: ";
 cin.get(str1,50); cin.get(ch);
 l = length(str1);
 cout<<"\n Length of the string is: "<<l;
 cout<<"\n Enter the second string: ";
 cin.get(str2,50); cin.get(ch);
 le=length(str2);
 concat(str1,str2,l,le);
}

int length(char c[50])
{
 for(int i =0 ; c[i] != '\0';i++)
 {;
 }
 return i;
}

void concat(char c[50], char c2[50],int lo, int li)
{
 char cat[100];
 for(int i=0;i<lo;i++)
 {
  cat[i]=c[i];
 }
 for(int k=0,j=i; j<i+li;j++,k++)
 {
  cat[j]=c2[k];
 }
 cat[j]='\0';
 cout<<cat;
}
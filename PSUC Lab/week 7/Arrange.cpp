#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char string[30][30],temp[30];
    int num,i,j;
    cout<<"\n Enter the number of strings: \t";
    cin>>num;

    cout<<"Enter the strings: ";

    for(i=0;i<num;i++)
    {
        cin>>string[i];
    }
       for(i=0;i<num-1;i++)
        for(j=i+1;j<num;j++)
       {
         if(strcmp(string[i],string[j])>0)
         {
             strcpy(temp,string[i]);
             strcpy(string[i],string[j]);
             strcpy(string[j],temp);
         }
       }

       cout<<"\n The sorted array is: "<<endl;

       for(i=0;i<num;i++)

            cout<<string[i]<<"\t";
       return 0;
}


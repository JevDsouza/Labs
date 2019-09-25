#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student
{
 char name[20],grade;
 int rollno;
 public:
 void read(student s[]);
 void display(student s[]);
 void sor(student stud[]);
 };

void student::read (student s[5])
 {
   char n[5][20], g[5],ch;
   int r[5];
   for(int i=0;i<5;i++)
   {
    cin.get(ch);
    cout<<"\n Enter name: ";cin.getline(n[i],20);

    strcpy(s[i].name, n[i]);
    cout<<"\n Enter grade: "; cin>>g[i];
    cout<<"\n Enter roll number: ";cin>>r[i];
    s[i].grade=g[i];
    s[i].rollno=r[i];
   }

    return;
 }

void student::display (student s[5])
 { for(int i=0;i<5;i++)
   {
     cout<<"\n Student"<<i+1<<" Name: ";
         cout<<s[i].name;
     cout<<"\n Roll No. "<<s[i].rollno<<" Grade: "<<s[i].grade;
   }
   return;
 };


void student::sor(student s[5])
{
  student temp;
  for(int i=0;i<5;i++)
  { for(int j=0;j<4;j++)
   {
     if(s[j].rollno>s[j+1].rollno)
     {
     temp=s[j];
     s[j]=s[j+1];
     s[j+1]=temp;
     }
   }
  }
return;
}

int main()
{ student s[5],st;
  char na[20], gr;
  int ro;


 st.read(&s[5]);
 st.display( &s[5]);
 st.sor(&s[5]);
 cout<<"\n After sorting: ";
 st.display(&s[5]);

 return 0;
}


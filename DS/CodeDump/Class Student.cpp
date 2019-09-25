#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class student
{
 char name[20],grade;
 int rollno;
 public:
 student(char n[20], char g, int r);
 void read(student s[]);
 void display(student s[]);
 void sor(student stud[]);
 };

void student::read (student s[5])
 {
   char n[5][20], g[5];
   int r[5];
   for(int i=0;i<5;i++)
   {
    cout<<"\n Enter name: ";cin.get(n[i],20);
    cout<<"\n Enter grade: "; cin>>g[i];
    cout<<"\n Enter roll number: ";cin>>r[i];
    s[i].name = n[i][20];
    s[i].grade=g[i];
    s[i].rollno=r[i];
    }
    return;
 }

void student::display (student s[5])
 { for(int i=0;i<5;i++)
   {
     cout<<"Student"<<i<<" Name: "<<s[i].name<<" Roll No. "<<s[i].rollno<<" Grade: "<<s[i].grade;
   }
   return;
 };

 /*student::student(char n[20], char g, int r)
 { name[20]=n[20];
   grade=g;
   rollno=r;
 }*/

void student::sor(student s[10])
{
  student temp;
  for(int i=0;i<10;i++)
  { for(int j=0;j<9;j++)
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
  for ( int j=0;j<5;j++)
 {cout<<"\n Enter Name: "; cin.get(na,20);
 cout<<"\n Enter Grade: "; cin>>gr;
 cout<<"\n Enter roll no.: "; cin>>ro;
 s[j].student(na,gr,ro);
 }
 st.read(s[5]);
 st.display(s[5]);
 st.sor(s[5]);
 st.display(s[5]);

 return 0;
}


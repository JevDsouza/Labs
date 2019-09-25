#include<iostream>
using namespace std;
 class time
 {private: int hour,min,sec;
  public:
  void read();
  void display();
  time Add(time one, time two);
  time Diff(time o, time t);
 };

 void time::read()
 {
  cout<<"\n Enter number of hours: ";
  cin>> hour;
  cout<<"\n Enter number of minutes: ";
  cin>>min;
  cout<<"\n Enter number of seconds: ";
  cin>>sec;
 }

 void time::display()
 {
   cout<<"\nThe Time is: "<<hour<<":"<<min<<":"<<sec;
 }

 time time::Add(time one, time two)
 {
  time three;int tot;
  tot=( ((one.hour+two.hour)*3600)+ ((one.min+two.min)*60) + (one.sec+two.sec));
  three.hour=tot/3600;
  tot=tot%3600;
  three.min=tot/60;
  three.sec=tot%60;
  return three;
 // cout<<"\nTime after adding is: "<<h<<":"<<m<<":"<<s;
 }

 time time:: Diff(time o, time t)
 {
   time th;
   int tot1,tot2,diff;
   tot1= o.hour*3600+o.min*60+o.sec;
   tot2=t.hour*3600+t.min*60+t.sec;
   if(tot1>tot2)
   diff= tot1-tot2;
   else if(tot2>tot1)
   diff = tot2-tot1;

   th.hour=diff/3600;
   diff=diff%3600;
   th.min=diff/60;
   th.sec=diff%60;
  // cout<<"\The Difference in time is: "<<hou<<":"<<mi<<":"<<se;
  return th;
 }

 int main()
 {
  time t1,t2,t,t3;
  t1.read();
  t2.read();
  t1.display();
  t2.display();
  t=t.Add(t1,t2);
  t.display();
  t3=t3.Diff(t1,t2);
  t3.display();
  return 0;
 }

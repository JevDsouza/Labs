#include<iostream>
void Linear(int arr[], int, int);
void Binary(int arr[], int, int);
void Bubble(int arr[], int);
void main()
{ int n,ele; int seq[50];
  int c;
  char ch='y';
  do
 {
  cout<<"\n Enter size of array: ";
  cin>>n;
  cout<<"\nEnter array: ";
  for(int i=0;i<n;i++)
  cin>>seq[i];
  cout<<"\nEnter number to be searched for: ";
  cin>>ele;
  cout<<"\n Which method would you like to use? 1. Linear Search 2. Binary Search 3.Exit";
  cin>>c;

  switch(c)
  {
  case 1: Linear(seq,n,ele);
	  break;
  case 2: Binary(seq,n,ele);
	  break;
  default:cout<<"\n Invalid option";
  }
  cout<<"\n Do you want to continue?";
  cin>>ch;
 } while(ch== 'y' ||ch=='Y' && c!=3);

 }

  void Bubble(int x[],int size)
  { int temp;
   for(int i=0;i<size;i++)
   { for(int j=0;j<size-1;j++)
     {
       if(x[j+1]<x[j])
       {temp=x[j];
       x[j]=x[j+1];
       x[j+1]=temp;
       }
     }
   }
   cout<<"\n Array after sorting is: ";
   for(i=0;i<size;i++)
   cout<<" "<<x[i];
   return;
  }

  void Linear(int x[], int size, int element)
  {
   for(int k=0;k<size;k++)
   {
   if(x[k]==element)
   cout<<"\n Element found at position: "<<k+1;
   }
   return;
  }

  void Binary(int x[], int size, int element)
  {
    int l=0,r=size,mid;
    Bubble(x,size);

    while(l<r)
    {  mid=(l+r-1)/2;
      if(element<x[mid])
      r=mid-1;
      else if(element>x[mid])
      l=mid+1;
      else if(element==x[mid])
     { cout<<"\n Element found at position: "<<mid+1;break;}
    }
    return;
  }


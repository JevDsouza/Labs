   #include<iostream.h>
   #include<conio.h>
   #include<stdlib.h>
   void linear(int x,int y, int z[100]);
   void binary(int x,int y,int z[100]);
   void main()
   {
       clrscr();
      int p,num,a[100],n,temp;
      cout<<"Enter size of the array \n";
      cin>>n;
      z:
      cout<<"Enter array elements \n";
      for(int i=0; i<n;i++)

      cin>>a[i];
      for(i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	       {
		     if(a[i]<a[j])
		     {
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;
		      }
		}
      cout<<"The sorted array is \n";
      for(int k=0;k<n;k++)
      cout<<a[k]<<" ";
      cout<<"\n";

      x:
      cout<<"Enter 1) for linear search \n";
      cout<<"2) for binary search\n";
      cout<<"3) for exit \n";
      cout<<"4) for re entering numbers\n";
      cin>>p;

      switch(p)
      {
	case 1:
	{
		cout<<"Enter the number you want to search \n ";
		cin>>num;
		linear(num,n,a);
		goto x;
	}
	case 2:
       {

	  cout<<"Enter the number you want to search \n" ;
	  cin>>num;
	   binary(num,n,a);
	   goto x;
	  }
	  case 3:
	  exit(0);
	  case 4:
	  goto z;
      }


   }
    void linear(int num,int n,int a[])
    {
       for(int i=0; i<n; i++)
       {
	 if(num==a[i])
	 break;

	}
	if(a[i]==num)
	cout<<"the number is at "<<i+1<<" position \n";
	else
	cout<<"Number not found \n";
	getch();
    }
    void binary(int num,int n,int a[])
    {

       int low ,high,mid;
       low=0;
       high=n-1;


       while(low<=high)
    {  mid= (low+high)/2;
	     if(num==a[mid])
		{ cout<<"Number found at "<<mid+1<< " position \n ";
		 break;}
	      else if(num>a[mid])
			{ low=mid+1;}
	      else
			 {  high=mid-1;   }

	}
	  if(low>high)
	   cout<<"Number not found \n ";
	   getch();
       }
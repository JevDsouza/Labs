#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Enter your choice: 1-yes, 2-no\n+";
	cin>>choice;
	switch(choice)
	{
		case 1:   cout<<"YESSSSSSS……";
		     	break;
		case 2:   cout<<"NOOOOOO……";
		     	break;
		default:  cout<<" DEFAULT CASE…….";
	}
	cout<< "The choice is:"<<choice;
return 0;
}


#include <iostream>
using namespace std;
int main ()
{
int n, number, triangularNumber=0, counter;

for ( counter = 1; counter <= 5; counter++ )
{
cout<<"What triangular number do you want? ";
cin>>number;

for ( n = 1; n <= number; n++ )
	triangularNumber = triangularNumber + n;

cout<<"Triangular number"<<number<<"is"<<triangularNumber;
}
return 0;

}



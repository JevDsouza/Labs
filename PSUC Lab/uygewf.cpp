#include<iostream>
using namespace std;
int IsPrime(int num) //prime check
{
    int p=1;
    for(int j=2;j<=num/2;j++)
    {
        if(num%j==0)
        {
            p=0;
            break;
        }
   }
   return p;
}
int IsPrime(int); //prototype

int main() {
  int n;

  cout<<"Enter a number : ";
  cin>>n;
  if (IsPrime(n)==1)
     cout<<n<<" is a prime no.";
  else
     cout<<n<<" is NOT a Prime no.";
  return 0;
}

#include<iostream>
using namespace std;
main()
{
    int i, j, n, k, sum=0;
    cout<<"Enter the amount of times you want a triangular series";
    cin>>n;
    for(i=0;i<=n;i++)

    {
      cout<<"Enter the number";
      cin>>k;
    for(j=0;j<=k; j++)
        sum= sum+j;
        cout<<"The triangular number of "<<k<<" is "<<sum;
    }


}

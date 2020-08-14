#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[20][20],m,n,trace;
    float sum,norm;
    cout<<"enter order of first matrix :";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    trace=0;
    sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                trace+=a[i][j];
            }
            sum+=(a[i][j]*a[i][j]);
        }
    }
    norm=sqrt(sum);
    cout<<"trace ="<<trace<<endl;
    cout<<"norm ="<<norm;
    return 0;
}

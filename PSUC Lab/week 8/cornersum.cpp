#include<iostream>
using namespace std;
int sumcorner(int a[][100],int m,int n)
{
    return(a[m-1][0]+a[0][0]+a[0][n-1]+a[m-1][n-1]);
}
int main()
{
    int m,n,a[100][100],sum;
    cout<<"enter order of matrix :";
    cin>>m>>n;
    cout<<"enter elements :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"sum of corner elments :"<<sumcorner(a,m,n);
    return 0;
}

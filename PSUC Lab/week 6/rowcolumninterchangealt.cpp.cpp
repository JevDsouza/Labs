#include<iostream>
using namespace std;
int main()
{
    int a[20][20],m,n,x,t;
    cout<<"enter order of first matrix :";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter row to change :"<<endl;
    cin>>x;
    x--;
    for(int i=0;i<m;i++)
    {
        t=a[x][i];
        a[x][i]=a[i][x];
        a[i][x]=t;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

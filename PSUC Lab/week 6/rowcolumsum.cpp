#include<iostream>
using namespace std;
int main()
{
    int a[20][20],m,n,t,row,col[20];
    cout<<"enter order of first matrix :";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        row=0;
        for(int j=0;j<n;j++)
        {
            row+=a[i][j];
            cout<<a[i][j]<<"\t";
        }
        cout<<row<<endl;

    }
    for(int j=0;j<n;j++)
    {
        col[j]=0;
        for(int i=0;i<m;i++)
        {
            col[j]+=a[i][j];
        }
        cout<<col[j]<<"\t";
    }

    return 0;
}

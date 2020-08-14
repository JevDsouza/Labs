#include<iostream>
using namespace std;
int main()
{
    int a[20][20],m,n,row[20],col[20],diag1,diag2;
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
        row[i]=0;
        for(int j=0;j<n;j++)
        {
            row[i]+=a[i][j];
        }

    }
    for(int j=0;j<n;j++)
    {
        col[j]=0;
        for(int i=0;i<m;i++)
        {
            col[j]+=a[i][j];
        }
//        cout<<col[j]<<"\t";
    }
    diag1=0;
    diag2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                diag1+=a[i][j];
            }
            if(i==m-j-1)
            {
                diag2+=a[i][j];
            }
        }
    }
    bool magic=true;
    if(diag2!=diag1)
    {
        magic=false;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            if(row[i]!=diag1)
            {
                magic=false;
            }
            if(col[i]!=diag1)
            {
                magic=false;
            }
        }
    }
    if(magic)
        cout<<"is magic";
    else
        cout<<"is not magic";
    return 0;
}

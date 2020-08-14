#include<iostream>
using namespace std;
int main()
{
    int a[20][20],b[20][20],c[20][20],m1,n1,m2,n2;
    cout<<"enter order of first matrix :";
    cin>>m1>>n1;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter order of second matrix :";
    cin>>m2>>n2;
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++ )
        {
            cin>>b[i][j];
        }
    }
    if(n1!=m2)
    {
        cout<<"Multiplication not possible"<<endl;
    }
    else

    {
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<n1;k++)
                {
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }
    }
    cout<<"answer :"<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++ )
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[20][20],m,n;
    cout<<"enter order of first matrix :";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    bool lowtriangle=true;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                if(a[i][j]!=0)
                    lowtriangle=false;
            }
        }
    }
    if(lowtriangle)
        cout<<"Is lower triangle";
    else
        cout<<"Not lower triangle";
return 0;
}

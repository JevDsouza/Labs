#include<iostream>
#include<conio.h>
using namespace std;
class sparse1
{
    int row,col,value;
    public:
        sparse1(int r,int c,int v)
        {
            row=r;
            col=c;
            value=v;
        }
        sparse1()
        {
            row=col=value=0;
        }
        void fastTranspose(sparse1*);
        void disp(sparse1*);
        };
        void sparse1::fastTranspose(sparse1 a[])
        {
            sparse1 b[20];
            int rowterm[20], start_pos[20], i, j, k;
            b[0].col=a[0].row;
            b[0].row=a[0].col;
            b[0].value=a[0].value;
            for(i=0;i<a[0].col;i++)
            {
                rowterm[i]=0;
            }
            for(j=1;j<=a[0].value;j++)
            {
                rowterm[a[j].col]++;
            }
            start_pos[0]=1;
            for(k=1;k<a[0].col;k++)
            {
                start_pos[k]=start_pos[k-1]+rowterm[k-1];
            }
            for(k=1;k<=a[0].value;k++)
                {
                    int x=start_pos[a[k].col];
                    b[x].row=a[k].col;
                    b[x].col=a[k].row;
                    b[x].value=a[k].value;
                    start_pos[a[k].col]++;
                }
            cout<<"Sparse Matrix after Fast Transpose \n";
            disp(b);
        }
        void sparse1::disp(sparse1 a[])
        {
            cout<<"Row\tCol\tValue\n";
            for(int i=0;i<=a[0].value;i++)
                {
                    cout<<a[i].row<<"\t"<<a[i].col<<"\t"<<a[i].value<<"\n";
                }
        }
        int main ()
        {
            sparse1 s1[20];
            int r,c,v,val;
            cout<<"Enter the no. of rows:\n";
            cin>>r;
            cout<<"Enter the no. of cols:\n";
            cin>>c;
            cout<<"Enter the no. of values:\n";
            cin>>v;
            s1[0]=sparse1(r,c,v);
            cout<<"Enter the elements of the sparse matrix:\n";
            for(int i=1;i<=v;i++)
                {
                    cout<<"\nRow "<<i<<": "; cin>>r;
                    cout<<"\nCol "<<i<<": "; cin>>c;
                    cout<<"\nValue "<<i<<": "; cin>>val;
                    s1[i]=sparse1(r,c,val);
                }
                s1[0].fastTranspose(s1);
                return 0;
            }

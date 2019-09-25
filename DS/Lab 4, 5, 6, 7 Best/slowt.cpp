#include<iostream.h>
#include<conio.h>

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
        void slowTranspose(sparse1*);
        void disp(sparse1*);
        };
        void sparse1::slowTranspose(sparse1 a[])
        {
            sparse1 b[20];
            int k=1;
           for(int i=0;i<a[0].col;i++)
            {
                for(int j=1;j<=a[0].value;j++)
                {
                    if(a[j].col==i)
                    {
                        b[k].row=a[j].col;
                        b[k].col=a[j].row;
                        b[k].value=a[j].value;
                        k++;
                    }
                }
            }
                b[0].col=a[0].row;
                b[0].row=a[0].col;
                b[0].value=a[0].value;
                cout<<"INPUT SPARSE MATRIX IS:\n";
                disp(a);
                cout<<"OUTPUT USING SLOW TRANSPOSE:\n";
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
                s1[0].slowTranspose(s1);
                //s1[0].disp(s1);
                return 0;
            }

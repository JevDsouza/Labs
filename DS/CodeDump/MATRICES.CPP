#include<iostream.h>
void max(int[50][50],int[50][50],int,int);
void main()
{int m,n,mat1[50][50], mat2[50][50];
 cout<<"\n Enter number of rows: ";
 cin>>m;
 cout<<"\n Enter number of columns: ";
 cin>>n;
 cout<<"\n Enter elements for matrix 1: ";
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  cin>>mat1[i][j];
 }

 cout<<"\n Enter elements for matrix 2: ";
 for(i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  cin>>mat2[i][j];
 }
 max(mat1,mat2,m,n);

 }

 void max(int a1[50][50], int a2[50][50],int row,int col)
 {
   int max[50][50],i,j;
   for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
    { if(a1[i][j]>=a2[i][j])
       max[i][j]=a1[i][j];
      else
	max[i][j]=a2[i][j];
    }
   }
   cout<<"\n Matrix of largest elements is: ";
   for(i=0;i<row;i++)
   {cout<<"\n";
    for(j=0;j<col;j++)
    cout<<max[i][j]<<" ";
   }
   return;
}


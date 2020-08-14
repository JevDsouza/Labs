#include<iostream>
using namespace std;

void Print(int,int);
int main()
{
    int l,u;
    cout<<"Enter the lower limit: "<<endl;
    cin>>l;
    cout<<"Enter the upper limit: "<<endl;
    cin>>u;
    cout<<"All the numbers from "<<l<<" to "<<u<<" are: "<<endl;
    Print(l,u);
    return 0;
}
void Print(int l,int u)
{
if(l>u)
        return;
  cout<<"\t"<<l;
    Print(l+1,u);

}

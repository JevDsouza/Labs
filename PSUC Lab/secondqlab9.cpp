#include<iostream>
using namespace std;
int h(int N1, int N2)
      {
          if (N2!=0)
        return h(N2, N1%N2);
        else
            return N1;
      }
int main()
{
    int n1, n2;
    cout<<"Enter the two numbers";
    cin>>n1>>n2;
    cout<<h(n1,n2);
    return 0;
}

/*
Linear and Binary Search
Arvind S
*/

#include <iostream>
using namespace std;

int linear(int a[], int x, int n)
{
    for(int i = 0; i < n; i++)
        if(a[i] ==  x) return i;
    return -1;
}

int binary(int a[], int x, int n)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int m = (low + high) / 2;
        if(a[m] > x) high = m - 1;
        else if (a[m] < x) low = m + 1;
        else return m;
    }
    return -1;
}

int main()
{
    cout << "Enter size of array." << endl;
    int n;
    cin >> n;

    int a[n];
    long test;

    cout << "Enter elements." << endl;
    for(int i = 0; i < n; i++)
        {
            cin >> test;
            if(test > 32000 || test < -32000)
            {
                cout << "Invalid. Enter data again." << endl;
                i--;
            }
            else a[i] = test;
        }


    cout << "Enter element to search for." << endl;
    int x;
    cin >> x;

    cout << "Enter B for Binary and L for Linear search." << endl;
    char choice;
    cin >> choice;

    int res;
    if(choice == 'B' || choice == 'b') res = binary(a,x,n);
    else if(choice == 'L' || choice == 'l') res = linear(a,x,n);
    else
    {
        cout << "Invalid choice. Exiting." << endl;
        return -1;
    }

    if(res < 0) cout << "Element not found." << endl;
    else cout << "Element found at " << res << endl;
    return 0;
}

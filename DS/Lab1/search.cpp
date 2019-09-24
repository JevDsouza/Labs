/*
Program to implement linear and binary search
Extended to include bubble, insertion and selection sorts.
Recursive searching and sorting
Arvind S
*/

#include <iostream>
#include <limits.h>
using namespace std;

int linear(int a[], int x, int n)
{
    int i;
    for(i = 0; i < n; i++)
        if(a[i] ==  x) return i;
    if(i == n) return -1;
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

void bubble(int a[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void selection(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = INT_MAX, pos = -1;
        for(int j = i; j < n; j++)
            if(a[j] < min)
                {
                    min = a[j];
                    pos = j;
                }
        int temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}

int* recursive_search(int* curr, int* last, int data)
{
    if(data == *curr) return curr;
    if(curr == last) return NULL;
    return recursive_search(curr + 1, last, data);
}

int* rec_bi(int* start, int* last, int x)
{
    if(start <= last)
    {
        int* mid = (start + (start - last) / 2);
        if(x > *mid) return rec_bi(mid + 1, last, x);
        if(x < *mid) return rec_bi(start, mid - 1, x);
        return mid;
    }
    return NULL;
}

int* recursive_sort(int* curr, int* last)
{
    if(last - curr == 0) return NULL;

    int min = INT_MAX;
    int* pos = 0;
    for(int i = 0; i < last - curr; i++)
    {
        if(*(curr + i) < min)
        {
            min = *(curr + i);
            pos = curr + i;
        }
    }
    int temp = *curr;
    *curr = *pos;
    *pos = temp;

    return recursive_sort(curr + 1, last);
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
            if(test > INT_MAX)
            {
                cout << "Invalid. Enter data again." << endl;
                i--;
            }
            else a[i] = test;
        }

    //bubble(a,n);
    //selection(a, n);
    //recursive_sort(a, a + n);

    cout << "Enter element to search for." << endl;
    int x;
    cin >> x;

    int* r = rec_bi(a, a + n - 1, x);
    //recursive_search(a, a + n - 1, x);
    if(r != NULL) cout << r - a << endl;
    else cout << "Not found. " << endl;

    /*
    int p = linear(a, x, n);
    int q = binary(a, x, n);

    if(p > -1) cout << "Linear: " << p << endl;
    if(q > -1) cout << "Binary: " << q << endl;
    if(p < 0 || q < 0) cout << "Not found\n";
    */

    for(int i = 0; i < n; i++)
        cout << a[i] << " " ;

    return 0;
}

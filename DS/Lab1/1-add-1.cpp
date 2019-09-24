#include <iostream>
using namespace std;

int* rec_bi(int* start, int* last, int x)
{
    if(start <= last)
    {
        int length = last - start;
        int* mid = start + length / 2;
        if(x > *mid) return rec_bi(mid + 1, last, x);
        if(x < *mid) return rec_bi(start, mid - 1, x);
        return mid;
    }
    return NULL;
}

int* recursive_sort(int* curr, int* last)
{
    if(last - curr == 0) return NULL;

    int min = 32000;
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

int product(int a, int b)
{
    if(b == 1) return a;
    return a + product(a, b - 1);
}

int main()
{
    cout << "Enter size of array." << endl;
    int n;
    cin >> n;

    int a[n];
    cout << "Enter elements." << endl;
    for(int i = 0; i < n; i++) cin >> a[i];

    recursive_sort(a, a + n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " " ;

    cout << endl << "Enter element to search for." << endl;
    int x;
    cin >> x;

    int *res = rec_bi(a, a + n, x);
    if(*res < 0) cout << "Not found." << endl;
    else cout << "Found at " << res - a << endl;

    cout << "Enter any two numbers." << endl;
    int p, q;
    cin >> p >> q;

    cout << "Their product is " << product(p,q) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[] = {8,22,7,9,31,22,19};
    int count = 0, n = 8;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
                for(int k = 0; k < n; k++) cout << a[k] << " ";
                cout << endl;
                count++;
            }
        }
    }
    cout << count;
}

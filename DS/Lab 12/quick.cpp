#include <iostream>
using namespace std;

void quicksort(int[],int,int);
int part(int[],int,int,int);

int main()
{
    int arr[] = {15, 3, 9, 8, 5, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    quicksort(arr,0,n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

void quicksort(int a[], int l, int r)
{
    if(l >= r) return;
    int pivot = (l + r) / 2;
    int index = part(a, l, r, a[pivot]);
    quicksort(a, l, index - 1);
    quicksort(a, index, r);
}

int part(int a[], int l, int r, int p)
{
    while(l <= r)
    {
        while(a[l] < p) l++;
        while(a[r] > p) r--;
        if(l <= r) swap(a[l++], a[r--]);
    }
    return l;
}

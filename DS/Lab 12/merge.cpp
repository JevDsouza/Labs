#include <iostream>
using namespace std;

void mergesort(int[],int,int);
void mergearrays(int[],int,int,int);

int main()
{
    int arr[] = {15, 3, 9, 8, 5, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    mergesort(arr,0,n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

void mergearrays(int A[], int low, int high, int mid)
{
    int i = low, j = mid + 1, k = low, c[50];
    while (i <= mid && j <= high)
    c[k++] = A[i] < A[j] ? A[i++] : A[j++];
    while (i <= mid) c[k++] = A[i++];
    while (j <= high) c[k++] = A[j++];
    for (i = low; i < k; i++) A[i] = c[i];
}

void mergesort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        mergearrays(a, l, r, m);
    }
}

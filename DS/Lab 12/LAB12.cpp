#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Quick sort
int part(int[],int,int,int);
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

//Heap sort
struct heap
{
    int a[50];
    int n;

    heap();
    heap(int[],int);
    void heapifyUp();
    void heapifyDown();
    void addToHeap(int);
    int poll();
    void print();
    void heapsort();
    //helper methods
    int parent(int x){return (x - 1) / 2;}
    int leftChild(int x){return 2 * x + 1;}
    int rightChild(int x){return 2 * x + 2;}
};

heap::heap()
{
    n = 50;
}

heap::heap(int arr[], int p)
{
    n = 1;
    a[0] = arr[0];
    for(int i = 1; i < p; i++)
    addToHeap(arr[i]);
}

void heap::heapifyUp()
{
    int index = n - 1;
    while(parent(index) >= 0 && a[parent(index)] > a[index])
    {
        swap(a[parent(index)], a[index]);
        index = parent(index);
    }
}

void heap::heapifyDown()
{
    int index = 0;
    while(leftChild(index) >= 0 && leftChild(index) < n)
    {
        int smallerChild = leftChild(index);
        if(rightChild(index) < n && a[rightChild(index)] < a[leftChild(index)])
            smallerChild = rightChild(index);
        if(a[index] < a[smallerChild]) break;
        else swap(a[index], a[smallerChild]);
        index = smallerChild;
    }
}

int heap::poll()
{
    int item = a[0];
    a[0] = a[n-- - 1];
    heapifyDown();
    return item;
}

void heap::addToHeap(int x)
{
    a[n++] = x;
    heapifyUp();
}

void heap::print()
{
    for(int i = 0; i < n; i++) cout << a[i] << " " ;
    cout << endl;
}

void heap::heapsort()
{
    int size = n;
    int another[size];
    int i = 0;
    while(n >= 0) another[i++] = poll();
    for(int i = 0; i < size; i++)
        a[i] = another[i];
    n = size;
}

//Radix sort
void radixsort(int a[], int place)
{
    vector <vector <int> > counter(10);
    for(int i = 0; i < 10; i++)
        counter[a[i] / (int)pow(10, place) % 10].push_back(a[i]);
    if(counter[0].size() == 10) return;
    int k = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < counter[i].size(); j++)
            a[k++] = counter[i][j];
    }
    radixsort(a, place + 1);
}

//Merge sort
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


int main()
{
    cout<<"Enter 10 elements: ";
    int a[10];
     for(int i = 0; i < 10; i++) cin>>a[i];
     int n = sizeof(a)/sizeof(int);

    cout << "Array: ";
    for(int i = 0; i < n; i++) cout << a[i] << " " ;
    cout<<"\n----------MENU----------\n1. Quick Sort\n2. Heap Sort\n3. Radix Sort\n4. Merge Sort\n";
    int opt;
    cin>>opt;
    heap s(a, n);
    switch(opt)
    {
        case 1: quicksort(a,0,n - 1);
                cout<<"Sorted array: ";
                for(int i = 0; i < n; i++) cout << a[i] << " ";
                break;

        case 2: cout<<"Sorted array: ";

                s.heapsort();
                s.print();
                break;
        case 3: radixsort(a, 0);
                cout<<"Sorted Array: ";
                for(int i = 0; i < n; i++) cout << a[i] << " " ;
                break;
        case 4: mergesort(a,0,n - 1);
                cout<<"Sorted array: ";
                for(int i = 0; i < n; i++) cout << a[i] << " ";
                break;
        default: return 0;
    }
    return 0;

}

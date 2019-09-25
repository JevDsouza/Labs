#include <iostream>
using namespace std;

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

int main()
{
    int arr[] = {15, 3, 9, 8, 5, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    heap x(arr, n);
    x.heapsort();
    x.print();
    return 0;
}

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

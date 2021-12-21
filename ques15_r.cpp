#include<iostream>
using namespace std;

void b_sort(int a[20], int n)//bubble sort using recursion
{
    if (n == 1){
        return ;
    }
    
    for (int i=0; i<n-1; i++) {
        if (a[i] > a[i+1]) {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    // Largest element is fixed, now sorting remaining array
    b_sort(a, n-1);
}

int main()
{
    int arr[20];
    int n;

    cout << "number of elements: ";
    cin >> n;
    cout << "array: ";
    for (int i=0;i<n;i++) {cin >> arr[i];}

    b_sort(arr,n);

    cout << "Sorted array: ";
    for (int i=0;i<n;i++) {cout << arr[i] << " ";}

    return 0;
}
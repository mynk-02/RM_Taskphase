#include<iostream>
using namespace std;

void sort(int lst[20],int len)//typical insersion sorting
{
    int i,j,key;
    for (i=1;i<len;i++)
    {
        j=i-1;
        key=lst[i];
        while (j>=0 && key<lst[j]){
            lst[j+1]=lst[j];
            j-=1;
        }
        lst[j+1]=key;
    }
}

int b_search(int arr[20],int item,int big,int end)//binary sort using recursion
{
    int mid= (big + end)/2;
    if (item>arr[mid]){return b_search(arr,item,mid+1,end);}
    else if (item<arr[mid]){return b_search(arr,item,big,mid-1);}
    else {return mid;}
}

int main() 
{
    int arr[20],l,n;
    cout << "lenth of array: ";
    cin >> l;
    cout << "enter array: ";
    for (int i=0;i<l;i++){
        cin >> arr[i];
    }
    
    //for binary search, the array should be sorted
    sort(arr,l);
    cout << "sorted list: ";
    for (int i=0;i<l;i++){cout << arr[i] << " ";}

    //binary search
    cout << "\nnumber to be searched: ";
    cin >> n;

    int big=0,end=l;
    int index=b_search(arr,n,big,end),pos=index+1;
    cout << "\nindex in array is " << index;
    cout << "\nposition in array is " << pos;

    return 0;
}
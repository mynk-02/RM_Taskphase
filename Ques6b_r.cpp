#include<iostream>
using namespace std;

int b_search(int lst[20], int len, int item)
{
    for (int i=0;i<len;i++) {
        if (lst[i]==item) {
            return i;
        }
    }
    return -1;
}

int b_sort(int lst[20],int len)
{
    for (int i=1;i<len;i++) {
        for (int j=0;j<len-1;j++) {
            if (lst[j]>lst[j+1]){
                int temp=lst[j];
                lst[j]=lst[j+1];
                lst[j+1]=temp;
            }
        }
    }
    return lst[len];
}

int s_sort(int lst[20], int len)
{
    for (int i=1;i<len;i++) {
        int key=lst[i];
        int j=i-1;
        while (j>-1 && lst[j]>key) {
            lst[j+1]=lst[j];
            j-=1;
        }
        lst[j+1]=key;
    }
    return lst[len];
}

int main()
{
    int arr[20],n,val;
    char s;
    cout << "Number of elements in array: ";
    cin >> n;
    cout << "Elements: ";
    for (int i=0;i<n;i++) { cin >> arr[i]; }

    cout << "Method of sorting? [s->selction, b->bubble] ";
    cin >> s;

    //sorting the array with preferred method
    if (s=='s') {
        arr[n]=s_sort(arr,n);
    }
    else if (s=='b') {
        arr[n]=b_sort(arr,n);
    }
    else {
        cout << "ERROR: Invalid sorting method!";
        return 0;
    }

    cout << "Sorted array: ";
    for (int i=0;i<n;i++) { cout << arr[i] << " " ; }
    
    //binary search
    cout << "\nElement to be searched: ";
    cin >> val;

    int index=b_search(arr,n,val), pos=index+1;
    if (index!= -1){ 
        cout << "\nindex of element in array is " << index;
        cout << "\nposition of element in array is " << pos;
    }
    else {
        cout << "\nElement does not exist in array!";
    }

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

void sort_by_len(string str[10],int n) //bubble sort using recursion
{
    if (n == 1){
        return ;
    }
    
    for (int i=0; i<n-1; i++) {
        if (str[i].length() > str[i+1].length()) {
            string temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
        // if length of string is equal then sort alphabetically
        else if (str[i].length() == str[i+1].length() && str[i] > str[i+1]) {
            string temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    sort_by_len(str, n-1);
}

void sort_in_asc(string str[10], int n) //
{
    for (int i=0; i<n; i++) {//loop for selecting word
        for (int j=1;j<str[i].length();j++) {//basic insertion sorting of characters
            char key=str[i][j];
            int k=j-1;
            while (k>-1 && str[i][k] > key) {
                str[i][k+1]=str[i][k];
                k--;            
            }
        str[i][k+1]=key;
        }
    }
}

int main()
{
    string strings[10];
    int n;
    cout <<"number of strings: "; //length of 2d string matrix
    cin >> n;

    cout << "enter strings: \n";
    for (int i=0;i<n;i++) { cin >> strings[i];}

    //sorting strings by length and print 2d matrix
    sort_by_len(strings,n);
    cout << "\nAfter sorting by length: \n";
    for (int i=0;i<n;i++) { cout << strings[i] <<endl;}

    //sorting each characters of already sorted by length 2d matrix
    sort_in_asc(strings,n);
    cout << "\nAfter sorting by length and individual string in asc order: \n";
    for (int i=0;i<n;i++) { cout << strings[i] <<endl;}


    return 0;
}
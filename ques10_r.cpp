#include<iostream>
using namespace std;

int fibo(int n){
    if (n==1) { return 0;}
    else if (n==2) {return 1;}
    else { return (fibo(n-1) + fibo(n-2));}
}

int main()
{
    int a=0,b=1,n=40,term;
    char s;

    cout << "enter to start!";
    cin.ignore();//accepts enter to execute the rest of the code 

    for (int i=1;i<n+1;i++){
        term = fibo(i);
        cout << term << endl;
    }

    return 0;
}
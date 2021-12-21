#include<iostream>
using namespace std;

//sum of digits using recursion
int sum_of_digits(int n){
    if (n==0) {return 0;}
    return (n % 10 + sum_of_digits( n/10 ));
    
}

int main()
{
    int n,dig,sum=0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "\nSum of digits with recursion is " << sum_of_digits(n);

    //sum of digits without recursion
    while (n>0){
        dig= n % 10;
        sum+=dig;
        n/=10;
    }
    cout << "\nSum of digits without recursion is " << sum;

    return 0;
}
#include<iostream>
using namespace std;

int sum_f(int n) //sum of factors of n
{
    int fsum=0;
    for (int i=1;i<n;i++){
        if (n%i==0) {fsum+=i;}
    }

    return fsum;
}

void check_amicable(int n1,int n2)
{
    int sumf1=sum_f(n1),sumf2=sum_f(n2);

    if (sumf1==n2 && sumf2==n1) {
        cout << "The numbers are Amicable Numbers!";
        }
    else {
        cout << "The numbers are not Amicable Numbers!";
        }
}

int main() 
{
    int n1,n2;
    cout << "enter numbers: ";
    cin >> n1 >> n2;

    check_amicable(n1,n2);
    
    return 0;
}
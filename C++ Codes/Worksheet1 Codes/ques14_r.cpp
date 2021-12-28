#include<iostream>
using namespace std;

/* Logic for Euclidean algorithm
hcf=1;
loop of i[2,smaller(a,b)]
    if i divides both a,b 
        hcf = i* HCF(a/i,b/i);
return hcf;
*/

int smaller(int a,int b)
{
    if (a<b) {return a;}
    else if (a>b) {return b;}
    else {return a;}
}

int HCF(int a,int b)
{
    int hcf=1;
    for (int i=2;i<smaller(a,b)+1;i++) {
        if (a%i==0 && b%i==0) {
            hcf = i * HCF(a/i,b/i);
        }
    }
    return hcf;
}

int main()
{
    int a,b;
    cout << "enter 2 numbers: ";
    cin >> a >> b;

    cout << "GCD: " << HCF(a,b);
    
    return 0;
}
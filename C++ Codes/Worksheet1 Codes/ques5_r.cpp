#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int d;
    cout << "Enter a decimal number: ";
    cin >> d;

    bitset<8> x(d);
    cout << "Binary: " << x << endl;
    cout << "Hexadecimal: " << uppercase << hex << d << endl;
    cout << "Octal: " << oct << d << endl;
    
    return 0;
}
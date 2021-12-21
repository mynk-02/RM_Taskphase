#include<iostream>
using namespace std;

int main()
{
    string str1,str2;
    cout << "enter string: ";
    cin >> str1;
    string *p1= &str1,*p2= &str2;
    *p2=*p1;
    cout << "copied string: " <<str2;

    return 0;
}
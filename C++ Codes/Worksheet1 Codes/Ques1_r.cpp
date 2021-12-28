#include <iostream>

using namespace std;

void str_b_sort(string str) {
    int n=str.length();
    for (int i=1;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            if (str[j]> str[j+1]) {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout << "sorted string: ";
    cout << str;

}

int main()
{
    string str;
    cout << "enter string: ";
    cin >> str;

    str_b_sort(str);
    
    return 0;
}

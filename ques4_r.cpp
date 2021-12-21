#include<iostream>
using namespace std;

int check_hill_n(int a[20],int len,int flag) 
{
    int i,k;
    //loop to find where the number goes downhill
    for (i=0;i<len-1;i++){
        if (a[i+1]<a[i]) { break; }
        else if (a[i+1]==a[i]) {flag=0; return flag;} //if consecutive digits are same the not a hill.
    }
    //if digits remain decreasing, its a hill 
    for (k=i;k<len-1;k++){
        if (a[k+1]>=a[k]){ //digit either got repeated or was not constantly decreasing
            flag=0;
            return flag;
        }
        flag=1;
    }
    if (a[0]>a[1]) {flag=0;} //if number does not decrease
    return flag;
}

int main() 
{
    int n,dig,a[20],len,i=0,flag=0;
    cout << "enter a number: ";
    cin >> n;
    
    //storing number digits in array (reverse order)
    while (n>0) {
        dig = n % 10;
        a[i]= dig;
        n/=10;
        i++;
    }
    len=i;

    flag=check_hill_n(a,len,flag);
    
    if (flag==1) {cout << "Number is a Hill Number!";}
    else {cout << "Number is not a Hill Number!";}
    
    return 0;
}
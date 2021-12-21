#include<iostream>
using namespace std;

int c[10][10]={0},m,n,p,q;

//input elements of matrix
void i_matrix(int x, int y, int l[10][10]) 
{
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) { cin >> l[i][j]; }
    }
}

void m_multiplication(int a[10][10],int b[10][10])
{
    
    for (int i=0 ; i<m ; i++){
        for (int k=0 ; k<q ; k++) {
            for (int j=0 ; j<n ; j++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
}

int main()
{
    int a[10][10],b[10][10];
    cout << "Dimensions of matrix a: ";
    cin >> m >> n;
    cout << "Dimensions of matrix b: ";
    cin >> p >> q;

    //check compatibility for matrix multiplication
    if (n!=p){
        cout << "\nERROR: The matrices are not compatible for multiplication.";
        return 0;
    }

    cout << "element of matrix a: ";
    i_matrix(m,n,a);
    
    cout << "element of matrix b: ";
    i_matrix(p,q,b);

    m_multiplication(a,b);

    cout << "\na x b = \n";
    for (int i=0 ; i<m ; i++){
        for (int j=0; j<q ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
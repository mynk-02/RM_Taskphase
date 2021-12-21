#include<iostream>
using namespace std;


int i_matrix(int x, int y, int l[10][10]) 
{
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) { cin >> l[i][j]; }
    }
    return l[x][y];
}

void m_print(int x, int y, int a[10][10])
{
    cout << "\n";
    for (int z=0;z<x;z++) {
        for (int h=0;h<y;h++) {cout << a[z][h] << "\t";}
        cout << endl;
    }
}

void m_multi(int x,int y,int z,int w,int a[10][10],int b[10][10],int c[10][10])
{

    for (int i=0 ; i<x ; i++){
        for (int k=0 ; k<w ; k++) {
            for (int j=0 ; j<y ; j++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
}

void m_trans(int x,int y,int a[10][10],int a_[10][10])
{
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) {
            a_[j][i]=a[i][j];
        }
    }
}



int main()
{
    int m,n,p,q;
    int A[10][10],B[10][10];
    int A_[10][10],B_[10][10],C[10][10]={0},C_[10][10],D[10][10]={0};
    

    cout <<"dimension of matrix A: ";
    cin >> m >> n;
    cout <<"dimension of matrix B: ";
    cin >> p >> q;

    cout << "elements of matrix A: ";
    A[m][n]=i_matrix(m,n,A);
    cout << "elements of matrix B: ";
    B[m][n]=i_matrix(m,n,B);

    //check whether correct dimensions are provided
    if (n!=p || m!=q) {
        cout << "ERROR: Verification of Identity not possible, if mat1 is 2x3, then mat2 should be 3x2 !";
        return 0;
    }


    m_trans(m,n,A,A_);//A_ = A'
    m_trans(p,q,B,B_);//B_ = B'
    m_multi(m,n,p,q,A,B,C);// C = AxB
    m_trans(m,q,C,C_);//C_ = C'
    m_multi(q,p,n,m,B_,A_,D);// D = B'x A'

    
    
    cout << "To Prove: (A.B)' = B'.A' \n";
    cout << "\nLHS: (A.B)' =" ; //printing LHS
    m_print(q,m,C_);
    cout << "\nRHS: B'. A' =" ; //printing RHS
    m_print(q,m,D);

    for (int z=0;z<q;z++) { //Comparing every element of LHS and RHS
        for (int h=0;h<m;h++) {
            if (C_[z][h]!=D[z][h]) {
                cout << "LHS != RHS";
                return 0; //end the main() here.
            }
        }
    }
    cout << "LHS = RHS. Hence Proved!";
    
    
    return 0;
}
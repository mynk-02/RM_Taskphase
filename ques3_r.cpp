#include<iostream>
using namespace std;

int m,n;

void m_edit(int mat[10][10],int ele[10][2],int w)
{
    //updating row elements
    for (int q=0;q<w;q++){
        for (int p=0;p<n;p++){
            mat[ele[q][0]][p]=0;
        }
    }
    //updating column elements
    for (int q=0; q<w; q++){
        for (int p=0; p<m ; p++){
            mat[p][ele[q][1]]=0;
        }
    }
}

int main()
{
    int a[10][10];
    int pos[10][2],w=0;
    cout << "enter dimentions of matrix: ";
    cin >> m >> n;
    cout <<"elements: ";
    for (int r=0;r<m;r++){
        for (int e=0;e<n;e++) {cin >> a[r][e];}
    }
    //finding position of '0' and storing in a 2d array
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]==0) {
                pos[w][0]=i;
                pos[w][1]=j;
                w++;
            }
        }
    }

    m_edit(a,pos,w);

    for (int i=0; i<m; i++){
        for (int j=0; j<n ; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;   
    }

    return 0;
}
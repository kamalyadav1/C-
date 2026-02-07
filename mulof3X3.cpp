#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    cout<<"Enter mat1"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter mat2"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>mat2[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {       // Row of A
        for (int j = 0; j < 3; j++) {
            mat3[i][j]=0;// Column of B
            for (int k = 0; k < 3; k++) { // The "Inner" multiplication
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout<<"OUT PUT MULTIPLICATION OF TWO MATRIX"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<mat3[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
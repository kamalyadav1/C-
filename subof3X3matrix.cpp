#include <iostream>
using namespace std;
int main() {
    int i,j;
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
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            mat3[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    cout<<"OUT PUT SUBTRACTIONOF TWO MATRIX"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<mat3[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
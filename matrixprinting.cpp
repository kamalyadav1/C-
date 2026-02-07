#include <iostream>
using namespace std;
int main() {
    int mat1[3][3];
    int i,j;
    cout<<"Enter number of rows and columns: ";
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>mat1[i][j];
        }
    }
cout<<"MATRIX PRINTING"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
}
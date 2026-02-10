#include<iostream>
using namespace std;
int main () {
    int a[]={1,2,3,4,5};
    int i;
    for (i=0;i<5;i++) {
        int *ptr=&a[i];
        cout<<*ptr<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n[10];
    int i;
    int sum=0;
    cout<<"enter the elements of the of Array"<<endl;
    for (i=0;i<10;i++) {
        cin>>n[i];
    }
    for (i=0;i<10;i++) {
        int *ptr=&n[i];
     sum += *ptr;
    }
    cout <<"the sum of the element of the inside the Array is :"<<sum<<endl;
    return 0;
}
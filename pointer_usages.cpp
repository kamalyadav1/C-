#include <iostream>
using namespace std;
int main() {
    int n[10];
    int i;
    cout<<"enter the elements of the of Array"<<endl;
    for (i=0;i<10;i++) {
      cin>>n[i];
    }
    for (i=0;i<10;i++) {
        int *ptr=&n[i];
        cout<<*ptr<<" ";
    }
    return 0;
}
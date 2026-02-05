#include <iostream>
using namespace std;
int main () {
    char arr[50]={};
    cout<<"enter the array";
    for (int i=0; i<=49; i++) {
        cin>>arr[i];
    }

    for (int i=0; i<=49; i++) {
       char *ptr=&arr[i];
        cout<<*ptr;

    }
    return 0;

}
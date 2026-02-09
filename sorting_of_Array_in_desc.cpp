#include<iostream>
using namespace std;
int main() {
    int n[]={1,2,3,4,5};
    cout<<"Enter a number: ";
    int a= sizeof(n);
    for (int i=0;i<5;i++) {
        cin>>n[i];
    }
    sort(n,n+5 ,greater<int>());
    for (int i=0;i<5;i++) {
        cout<<n[i]<<" ";
    }

    return 0;
}
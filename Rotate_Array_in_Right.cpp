#include<iostream>
using namespace std;
int main() {
    int n[4]={2,3,4,5};
    int s=sizeof(n)/sizeof(int);
    cout<<n[s-1]<<" ";
    for(int i=0;i<s-1;i++) {

        cout<<n[i]<<" ";
    }
    return 0;
}
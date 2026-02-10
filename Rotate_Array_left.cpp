#include<iostream>
using namespace std;
int main() {
    int n[4]={2,3,4,5};
    int s=sizeof(n)/sizeof(int);
    for(int i=0;i<s-1;i++) {

            cout<<n[i+1]<<" ";

        }
    cout<<n[0]<<endl;

    return 0;

}
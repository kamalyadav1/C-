#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter any limit to the first n atural number  :"<<endl;
    cin>>n;
    cout<<"natural number are"<<endl;
    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            cout<<i<<endl;
        }
    }
    return 0;
}
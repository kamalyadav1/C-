#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    int l;

    cout<<"enter any number reverse ";
    cin>>n;
    int nw=n;
    while (n>0) {
        l=n % 10;
     sum=sum+l*l*l;
        n=n/10;

    }
    if (sum==nw){
        cout<<"this given number is Armstrong";
    }

    else {
        
        cout<<"this given number is not Armstrong";
    }
    return 0;
}

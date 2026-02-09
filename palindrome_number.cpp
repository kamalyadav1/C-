#include<iostream>
using namespace std;
int main() {
    int n;
    int rev=0;
    int l;

    cout<<"enter any number reverse ";
    cin>>n;
    int nw=n;
    while (n>0) {
        l=n % 10;
        rev=rev*10+l;
        n=n/10;

    }
    if (rev==nw){
        cout<<"this given number is palidrome";
    }

    else {
        cout<<"this given number is not palidrome";
    }
    
    return 0;
}

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int count=0;
    int i;
    cout<<"enter the starting interval";
    cin>>i;

    for( i;i<=n;i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    if (count==2) {
        cout<<"prime number"<<endl;
    }
    else {
        cout<<" this number is not prime number"<<endl;
    }
}
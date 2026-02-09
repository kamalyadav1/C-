#include<iostream>
using namespace std;
int main() {
    int n;
    int count=0;
    cout<<"Enter any number : ";
    cin>>n;
    while (n>0) {
        n=n/10;
        count=count+1;

    }
    
    cout<<"The number of digits in the given number is : "<<count;
    return 0;
}

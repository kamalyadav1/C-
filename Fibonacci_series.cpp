#include<iostream>
using namespace std;
int main() {
    int a=0;
    int b=1;
    for (int i=1;i<=10;i++) {
        cout <<a<<" ";
        cout<<b<<" ";
        a=a+b;
        b=b+a;
    }
    return 0;
}
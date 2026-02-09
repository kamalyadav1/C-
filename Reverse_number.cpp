#include<iostream>
using namespace std;
int main() {
   int n;
int rev = 0;
    int l;

    cout<<"enter any number reverse ";
    cin>>n;
    while (n>0) {
        l=n % 10;
        rev=rev*10+l;
        n=n/10;

    }
    cout<<"reverse of n is:"<<" "<<rev<<endl;
    return 0;
}
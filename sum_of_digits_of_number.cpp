#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    int l;

    cout<<"enter any number  ";
    cin>>n;
    while (n>0) {
        
        l=n % 10;
       sum=sum+l;
        n=n/10;

    }
    cout<<"sum of the digits:"<<" "<<sum<<endl;
    return 0;
}

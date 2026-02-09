#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    cout<<"enter any number of limit  :"<<endl;
    cin>>n;
    cout<<"natural number are"<<endl;
    for (int i=1; i<=n; i++) {
        
        sum +=i;
    }
    cout<<"the sum of the first N natural number is :"<<sum<<endl;
    return 0;
}//

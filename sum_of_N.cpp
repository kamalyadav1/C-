#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    cout<<"enter any limit to the first n atural number  :"<<endl;
    cin>>n;
    cout<<"natural number are"<<endl;
    for (int i=1; i<=n; i++) {
        sum +=i;
    }
    cout<<"the sum of the first N natural number is :"<<sum<<endl;
    return 0;
}//
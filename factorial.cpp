#include<iostream>
using namespace std;
int main() {
    int n;
    double fact=1;
    cout<<"enter any number to find the factorial of that number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++) {
       fact = fact*i;
    }
    cout<< "factorial is : "<< fact<<endl;
   return 0;
}
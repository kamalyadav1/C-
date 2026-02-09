#include<iostream>
using namespace std;
int main() {
    int n[5];
    cout<<"enter the element of the arrays"<<endl;
    for(int i=0;i<5;i++) {
        cin>>n[i];
    }
    int a=n[0];
    for (int i=0;i<5;i++) {
        if (a>n[i]) {
            a=n[i];
        }

    }
    cout<<"the smallest number among arrayas is :"<<a;

    return 0;

}
#include<iostream>
using namespace std;
int main() {
    int n[5];
    int l[5];
    cout<<"enter the elements of the array of n"<<endl;
    for (int i=0;i<5;i++) {
        cin>>n[i];
    }
    cout<<"enter the elements of the array of l"<<endl;
    for (int i=0;i<5;i++) {
        cin>>l[i];
    }
    int s=sizeof(n)+sizeof(l);
    int d[s];
    for (int i=0;i<5;i++) {
        d[i]=n[i];
    }
    for (int i=1;i<5;i++) {
        d[4+i]=l[i];
    }
    cout<<"printing the merged Array"<<endl;
    for (int i=0;i<10;i++) {
        cout<<d[i]<<endl;
    }
}
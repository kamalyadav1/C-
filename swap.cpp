#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"enter any two numbers: "<<endl;
    cin>>x>>y;
    int temp;
    temp=y;
    y=x;
    x=temp;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;

}
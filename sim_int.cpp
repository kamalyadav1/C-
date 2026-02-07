#include <iostream>
using namespace std;
int main () {
    int p,t,r,s_i;
    Cout<<"enter the principal amount : ";
    cin>>p;
    cout<<"enter the time period for the simple interest";
    cin>>t;
    cout<<"enter the rate for the simple interest";
    cin>>r;
    s_i=(p*t*r)/100;
    cout<<"the simple interest is "<<s_i<<endl;
    return 0;

}
#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int a,p,r,n,t;
    cout<<"enter the principle amount"<<endl;
    cin>>p;
    cout<<"entr the rate of the compound interest"<<endl;
    cin>>r;
    cout<<"enter the number of times of the interest"<<endl;
    cin>>n;
    cout<<"enter the time period"<<endl;
    cin>>t;
     a = p * pow((1 + r/n),(n * t));
    cout<<"the interest is "<<a<<endl;
    return 0;

}
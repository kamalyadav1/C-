#include <iostream>
using namespace std;
int main() {
    int d;
    cout<<"enter the number of days"<<endl;
    cin>>d;
    int y=(int)d/360;
    int w=d%360;
    int m=(int)w/30;
    int f=w%30;
    cout<<y<<" "<<" years"<<" "<<m<<" "<<"months"<<" "<<f<<" "<<"days"<<endl;
    return 0;

}
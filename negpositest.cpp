#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x<0) {
        cout<<x<<" is negative"<<endl;
    }
    else if (x>0) {
        cout<<x<<" is positive"<<endl;
    }
     else {
         cout<<x<<" is zero"<<endl;
     }
    return 0;
}
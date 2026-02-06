#include <iostream>
using namespace std;
int main() {
    char x[1]={};
    cout<<"Enter a character: ";
    cin >> x;
    if (x=="a" || x=="e" || x=="i" || x=="o" || x=="u" || x=="A" || x=="E" || x=="O" || x=="U" || x=="I") {
        cout<<x<<" is a vowel"<<endl;

    }
    else {
        cout<<x<<" is consonant"<<endl;
    }
    return 0;
}
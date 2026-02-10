#include <iostream>
using namespace std;
int main() {
    int n[6];
    int key;
    bool found=false;
    cout<<"enter the elements insides the array"<<endl;
    for (int i=0;i<5;i++) {
        cin>>n[i];

    }
    cout<<"enter the value of the key to search"<<endl;
    cin>>key;
    for (int i=0;i<5;i++) {
        if (key==n[i]) {
            cout<<"element found"<<endl;
            found=true;
            break;
        }

    }
    if (!found) {
        cout<<"element not found"<<endl;
    }
    return 0;

}
#include <iostream>
using namespace std;
int main() {
    char name[11];
    cout<<"enter the letter of your name";
    for (int i=0; i<11; i++) {

        cin >> name[i];

    }
cout<<"OUTPUT" <<endl;
    for (int i=0; i<11; i++) {
      char *ptr = &name[i];
        cout << *ptr;
    }
    return 0;
}
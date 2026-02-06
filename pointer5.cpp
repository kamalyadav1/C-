#include <iostream>
using namespace std;
int main () {
    int x,y,z;
    cout <<"enter any three number " << endl;
    cin >> x >> y >> z;
   int *ptr1=&x;
    int *ptr2=&y;
    int *ptr3=&z;
    if (*ptr1 > *ptr2 && *ptr1 > *ptr3) {
         cout <<*ptr1<<" "<<"is greater "<<endl;
    }
    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3) {
        cout<<*ptr2<<" "<<"is greater "<<endl;
    }
    else {
        cout<<*ptr3<<" " <<"is greater "<<endl;
    }
    return 0;
}

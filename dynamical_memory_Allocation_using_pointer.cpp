#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int *ptr = new int(n);

    cout << *ptr << endl;

    delete ptr;//it will delected the location of that variable//if you want to us the location then donot use this
    return 0;
}
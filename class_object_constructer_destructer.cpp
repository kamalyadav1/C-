#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Hi, I am inside constructer" << endl;
    }
    ~Demo() {
        cout << "Now i am inside destructer" << endl;
    }
};
int main() {
    Demo obj;
    cout << " I am in Inside main function." << endl;
    return 0;
}
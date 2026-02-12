#include<iostream>
using namespace std;
class car {
public:
    car() {
        cout<<"car started"<<endl;
    }
};
class bike: public car {
public:
    bike() {
        cout<<"bikes gets started"<<endl;
    }
};
int main() {
    bike b;
}
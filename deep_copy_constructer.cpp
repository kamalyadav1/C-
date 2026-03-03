#include <iostream>
#include<string>
using namespace std;
class student {
public:
    string name;
    int roll;
    student(string n,int r) {
     name=n;
         roll=r;
    }
    student( const student &s) {
        name=s.name;
        int roll=12;

    }
};
int main() {
    student s("kamal",34);
    student s2=s;
    cout<<s2.name;
    return 0;
}
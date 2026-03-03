#include<iostream>
#include<string>
using namespace std;
class chai {
public:
    string name;
    int roll_no;

    chai() {
       name="kamal";
        roll_no=0;
    }

};

int main() {
    chai c;
    chai copied=c;
    cout<<copied.name<<endl;
    copied.name="raman";
    cout<<copied.name<<endl;
    return 0;
}
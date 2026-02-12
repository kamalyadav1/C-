#include<iostream>
using namespace std;
class teacher {
public:
    string name="kamal";
    string gender="male";
    int age=17;
    double salary=10000;
    string dep_name="cse";
    teacher() {
        cout<<"name of the teacher is :"<<name<<endl;
        cout<<"gender :"<<gender<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"salary :"<<salary<<endl;
    }
};
int main() {
    teacher t;
    return 0;
}

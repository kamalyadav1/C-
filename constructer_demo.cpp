#include <iostream>
#include <string>
using namespace std;


class school {
public:
    string name;
    int age;
    int grade;
    string father_name;
    string branch_name;
    school(string name ,int age,int grade,string father_name,string branch_name) {
        this->name=name;
        this->age=age;
        this->grade=grade;
        this->father_name=father_name;
        this->branch_name=branch_name;
    }
    void print() {
        cout<<"name of the student is"<<" "<<name<<endl;
        cout<<"age of the student is"<<" "<<age<<endl;
        cout<<"grade of the student is"<<" "<<grade<<endl;
        cout<<"name of the father is"<<" "<<father_name<<endl;
        cout<<"branch name is"<<branch_name<<endl;
    }

};
int main() {
    school s("Kamal",17,13,"Ramlakhan","cse ws Aiml");
    s.print();
    return 0;
}

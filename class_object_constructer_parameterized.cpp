#include<iostream>
using namespace std;
class student {
public:
    string name;
    int age;
    string gender;
    string grade;

    student (string name,int age,string gender,string grade) {
        this ->name=name;
        this ->age=age;
        this ->gender=gender;
        this ->grade=grade;
        cout<<"I am inside constructer parametrized"<<endl;
    }
    void print() {
        cout<<"Name is : "<<name<<endl;
        cout<<"Age is : "<<age<<endl;
        cout<<"Gender is : "<<gender<<endl;
        cout<<"Grade is : "<<grade<<endl;
    }


};
int main() {
student s("kamal",18,"male","6");
    s.print();
}
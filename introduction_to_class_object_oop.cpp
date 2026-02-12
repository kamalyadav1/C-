#include <iostream>
using namespace std;
class teacher {
        private:
        double salary;
        public:
        string name;
        int age;
        string gender;
        string address;
        string department_name;
        void money(double sal) {
            salary = sal;
            cout<<salary<<endl;
        }
        void information() {
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"department_name: "<<department_name<<endl;
        }
    };
int main() {
    teacher t;
    t.name="kamal_yadav";
    t.age=18;
    t.gender="male";
    t.address="Nepal_siraha";
    t.department_name="cse";
    t.information();
    t.money(140000);
    return 0;
}
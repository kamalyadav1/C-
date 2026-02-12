#include <iostream>
#include<string>
using namespace std;

class teacher {
public:
    string name;
    double salary;
    string branch_name;
       teacher() {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter salary"<<endl;
        cin>>salary;
        cout<<"enter branch name"<<endl;
        cin>>branch_name;
    }
};
class calculation :public teacher {
public:
    double bonous;
    calculation() {
        cout<<"enter the bonous of the teacher"<<endl;
        cin>>bonous;
    }
};
class total_salary : public calculation {
public:
    double totalsalary;
    total_salary() {
        totalsalary=salary+bonous;
        cout<<"total salary after geting bonous is "<<totalsalary<<endl;

    }


};
int main() {
    total_salary t;
    return 0;
}

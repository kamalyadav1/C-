#include<iostream>
using namespace std;
class Employee {
public:
    char name[20];
    int id;
    int salary;
    int bonous;

void Calculation() {
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your salary:"<<endl;
    cin>>salary;
    cout<<"Enter your bonous:"<<endl;
    cin>>bonous;
    cout<<"Enter your id:"<<endl;
    cin>>id;
    cout<<"Name:"<<name<<endl;
    cout<<"Salary:"<<salary<<endl;
    cout<<"Total salary with bonous:"<<salary+bonous<<endl;
}
};
int main() {
    Employee emp;
    emp.Calculation();
    cout<<"Thank You";
    return 0;
}




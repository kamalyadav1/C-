#include <iostream>
#include <string>
using namespace std;
class fees {
private:
    double fee;
    double discount;
public:
    double total_fee;
    string name;
    string grade;
    string branch;
    int no_months;
    fees(int no_months,double fee,double discount,string name,string grade,string branch) {
        this->no_months = no_months;
        this->fee = fee;
        this->discount = discount;
        this->name = name;
        this->grade = grade;
        this->branch = branch;
        total_fee=no_months*fee-discount;
    }
    void print() {
        cout<<"name of student is"<<" "<<name<<endl;
        cout<<"grade of student is"<<" "<<grade<<endl;
        cout<<"branch of student is"<<" "<<branch<<endl;
        cout<<"total fees for the"<<" "<< no_months<<" is "<<total_fee<<endl;
    }


};
int main() {
    fees f(5,500,456,"kamal","13","cse");
    f.print();
    fees *f2=new fees(6,500,345,"raman","34","aiml");
    f2->print();

}
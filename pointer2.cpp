#include <iostream>
using namespace std;
int main () {
    int marks[]={};
    int sum=0;
    cout << "Enter marks of five subjects";
    for (int i=0; i<=5; i++) {
        cin>>marks[i];
    }

    for (int i=0; i<=5; i++) {
        int *ptr = &marks[i];
        sum += *ptr;

    }
    int average=sum/5;
    cout << "average of the marks of the all subjects" <<" "<< average << endl;



}
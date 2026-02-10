#include<iostream>
using namespace std;
int main() {
    int a=2;
    int b=4;
    int temp=b;
    //checking if we change the value of original variable then the value of the pointe will change ans =changes
     b=a;
    int *ptr=&temp;
    a=*ptr;
    cout<<a<<" "<<b<<endl;
    return 0;

}
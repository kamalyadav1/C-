#include<iostream>
using namespace std;
int main() {
    int n[5];
    cout<<"enter the element of the arrays"<<endl;
    for(int i=0;i<5;i++) {
        cin>>n[i];
    }
    int sum=0;
    for (int i=0;i<5;i++) {
        sum+=n[i];


    }
    int avg=sum/5;
    cout<<"the average of the elements inside the array is :" <<avg;

    return 0;

}
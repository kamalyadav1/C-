#include <iostream>
#include<string>
using namespace std;
class calculater {
public:
    int a,b,c,d;
    int add;
    void sum(int a,int b) {
        this->a=a;
        this->b=b;
        add=a+b;
        cout<<"addition of two number is"<<" "<<add<<endl;
    }
    void sum(int a, int b, int c) {
        this->a=a;
        this->b=b;
        this->c=c;
        add=a+b+c;
        cout<<"sum of three number is "<<" "<<add<<endl;
    }
    void sum( int a, int b, int c, int d) {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        add=a+b+c+d;
        cout<<"sum of three number is "<<" "<<add<<endl;
    }
};
int main() {
    calculater c;
    c.sum(1,2);
    c.sum(2,3,4);
    c.sum(4,5,6,7);
    return 0;
}
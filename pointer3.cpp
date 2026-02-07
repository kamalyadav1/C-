#include <iostream>
using namespace std;
int main () {
    int radius;
    int area;
    int *ptr=&radius;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14* *ptr * *ptr;
    cout << "Area = " << area << endl;
    
    return 0;

}

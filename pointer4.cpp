#include <iostream>
using namespace std;
int main() {
    float num=45.33;
    float *ptr=&num;
    cout << "num = " << num << endl;
    int n=(int)*ptr;
    cout << "n = " << n<< endl;
    
    return 0;
}

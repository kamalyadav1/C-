#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int n1, n2, lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;


    int gcd = std::gcd(n1, n2);


    lcm = (n1 * n2) / gcd;

    cout << "The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;

    return 0;
}
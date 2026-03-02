#include <iostream>
#include <string>
using namespace std;
class price_cal {
private:
    double price;
    int dis_per;
    string product_name;
 public:
    double final_price;
    price_cal (string produc_name,double price ) {
        this->price = price;


    }
    price_cal(int dis_per ) {
        this->dis_per = dis_per;
        final_price=price-(dis_per/100)*price;
        cout<<"final price"<<final_price<<endl;
    }



};
int main () {
    price_cal p("biscout",340000);
    price_cal q(15);


}
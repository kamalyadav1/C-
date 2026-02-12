#include <iostream>
using namespace std;
class banking {
private:
    double amount;
public:
    double bank_account;
    string bank_holder_name;
    double withdrawal_amt;
    double deposit_amt;
    banking() {
        cout<<"enter the previous amount in that bank :"<<endl;
        cin>>amount;
        cout<<"enter the bank account holder name : "<<endl;
        cin>>bank_holder_name;
        cout<<"enter the bank account number : "<<endl;
        cin>>bank_account;
    }

    void set_bank_account() {
        cout<<"Bank account holder's name"<<bank_holder_name<<endl;
        cout <<"Bank account number is : "<<bank_account<<endl;
        cout<<"Enter the amout you want to deposit : "<<endl;
        cin >>deposit_amt;
        cout <<"Enter the amount you want to withdraw : "<<endl;
        cin>>withdrawal_amt;
        amount=amount+deposit_amt;
        if (withdrawal_amt <= amount) {
            cout<<"congratulations you withdrawal gets sucess"<<endl;
            amount=amount-withdrawal_amt;

        }
        else {
            cout<<"insufficent balance"<<endl;
        }
    }
};
int main() {
    banking B;
    B.set_bank_account();
    return 0;
}
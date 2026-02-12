#include<iostream>
using namespace std;
class Digital_book {
public:
     string book_list[10]={"science","physics","maths","chemistry","biology","english","nepali","maithali","social","environment_science"};
    int rack_no[10]={10,11,12,13,14,15,16,17,18,19};
    string book_name;
    int no;
    void finding_rack() {
        cout<<"enter the name of the book"<<endl;
        cin>>book_name;
        for(int i=0;i<=10;i++) {
           if ( book_list[i]==book_name) {
               no=i;
               break;
           }

        }
        cout<<"the rack no of "<<book_name <<" " <<rack_no[no]<<endl;

    }
};
int main() {
    Digital_book D;
    D.finding_rack();
    return 0;
}
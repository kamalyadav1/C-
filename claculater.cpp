#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"write any letter for the mathematical operation"<<endl;
    cin>>x;

    switch(x)
    {
        case '1' :
            cout<<"sunday ";
            break;

        case '2' :
            cout<<" monday ";
            break;
        case '3' :
            cout<<" tuesday " ;
            break;
        case '4':
            cout<<"wednesday";
            break;
        case '5':
            cout<<"friday";
        case '6':
            cout<<"saturday";
        default :
            cout<<"you are out of syllabus";




    }
    return 0;
}
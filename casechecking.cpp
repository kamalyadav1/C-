
#include<iostream>
using namespace std;
int main()
{
    char k;
    cout<<"enter any character: ";
    cin>>k;
    int ascii=(int)k;
    if (ascii>65 && ascii<=90)
    {
        cout<<"upper case";
    }
    else if (ascii>97 && ascii<=122)
    {
        cout<<"lower case";
    }
    return 0;
}
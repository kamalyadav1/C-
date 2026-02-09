//checking the either the triangle is possible with this three sides or not
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the lengths of the sides of the triangle"<<endl;
    cin>>a>>b>>c;
    if (a+b>c || b+c>a || c+a>b)
    {
        cout<<"the triangle is possible with this all sides";
    }
    else
    {
        cout<<"the triangle is not possible with these all please change the length of the side of the triangle";
    }
    return 0;
}
















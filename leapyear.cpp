#include<iostream>
using namespace std;
void leapyear(int year)
{
    if(year%4==0||year%400==0||year%100==0)
        cout<<year<<" is a leap year"<<endl;
    else
        cout<<year<<" is not a leap year";
}

int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
    leapyear(year);
    return 0;
}

//Leap Year or Not a Leap Year

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int year;
    cout <<"Give a year";
    cin >> year;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leap Year";
    }else
    {
        cout << "Not Leap Year";
    }
    getch();
}

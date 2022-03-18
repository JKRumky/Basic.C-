//Reverse the given Number:

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num, sum = 0, rem, temp;

    cout << "Enter a number= ";
    cin >> num;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    cout << "Reversed Number= " << sum;
    getch();
}

/*
Enter a number= 1234
Reversed Number= 4321
*/

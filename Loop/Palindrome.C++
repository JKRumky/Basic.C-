//Same as Reverse, just 1 condition needed.

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
    if(num == sum)
    {
        cout << "Palindrome";
    }else{
        cout << "Not Palindrome";
    }
    getch();
}

/*
Enter a number= 121
Palindrome
*/

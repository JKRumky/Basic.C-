//Greatest common divisor
//Least common multiple

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2, n1, n2, rem, GCD, LCM;

    cout << "Enter 2 Number: " << endl;
    cin >> num1 >> num2;

    n1 = num1;
    n2 = num2;

    while(n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    GCD = n1;
    LCM = (num1 * num2) / GCD;

    cout << "GCD = " << GCD << endl;
    cout << "LCM = " << LCM;

    getch();
}

/*
Enter 2 Number: 
6
8
GCD = 2
LCM = 24
*/

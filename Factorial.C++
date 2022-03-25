//Factorial

#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int i, Fact = 1, n;
    cout << "Enter Any Positive Number = ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        Fact = Fact * i;  
    }
    cout << Fact << endl; 
    getch();
}

/*
Enter Any Positive Number = 7
5040
*/

//Fibonacci Series:

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x = 0, y = 1, i, fibo, n;
    cout << "Enter number = ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        if(i <= 1)
        {
            fibo = i;
        }else
        {
            fibo = x + y;
            x = y;
            y = fibo;
        }
        cout << fibo << " ";
    }
    getch();
}
/*
Output:
Enter number = 10
0 1 1 2 3 5 8 13 21 34
*/

//Fibonacci Series:

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x = 0, y = 1, count = 0, fibo, n;
    cout << "Enter number = ";
    cin >> n;
    while(count < n)
    {
        if(count <= 1)
        {
            fibo = count;
        }else
        {
            fibo = x + y;
            x = y;
            y = fibo;
        }
        cout << fibo << " ";
        count++;
    }
    getch();
}
/*
Output:
Enter number = 10
0 1 1 2 3 5 8 13 21 34
*/

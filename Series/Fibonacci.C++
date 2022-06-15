#############################################
Fibonacci Series:

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
//Output:
Enter number = 10
0 1 1 2 3 5 8 13 21 34
####################################################
Fibonacci Series using an Array:

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, n, a[30];

    cout << "Enter the Fibonacci number : ";
    cin >> n;

    a[0] = 0;
    a[1] = 1;

    for(i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << endl;
    for(i = 0; i < n;i++)
    {
        cout << " " << a[i];
    }
    getch();
}
//Output:
Enter number = 10
0 1 1 2 3 5 8 13 21 34

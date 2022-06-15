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
Enter the Fibonacci number : 10

0 1 1 2 3 5 8 13 21 34

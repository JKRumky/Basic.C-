//Lucas series:

#include<iostream>
#include<conio.h>
usig namespace std;

int main()
{
    int i, n, x = 2, y = 1, lucas;
    cout << "enter number = ";
    cin >> n;
    cout << "Lucas = ";

    for(i = 0; i < n; i++)
    {
    if(i == 0)
    {
        cout << 2 << " ";
    }else if(i == 1)
    {
        cout << 1 << " ";
    }else
    {
        lucas = x + y;
        x = y;
        y = lucas;
    
    cout << lucas << " ";  
    }  
    }
    getch();
}

/*
Output:
enter number = 10
Lucas = 2 1 3 4 7 11 18 29 47 76
*/

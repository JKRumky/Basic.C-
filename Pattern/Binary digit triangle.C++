//1.
/*
1
10
101
.
.
n
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number=";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << col % 2;
        }
        cout << endl;
    }   
    getch(); 
}

/*Output
Enter a number=5
1
10
101
1010
10101
*/


//2.
/*
1
00
111
.
.
n
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number=";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << row % 2;
        }
        cout << endl;
    }   
    getch(); 
}

/*
Output
Enter a number=5
1
00
111
0000
11111
*/

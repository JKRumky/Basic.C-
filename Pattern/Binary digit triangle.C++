(i)
//print
1
10
101
.
.
n


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

Output
Enter a number=5
1
10
101
1010
10101



(ii)
//print
1
00
111
.
.
n


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


Output
Enter a number=5
1
00
111
0000
11111



(iii)
//print
n
.
.
1 1 1
 0 0
  1

    
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << " Enter a number= ";
    cin >> n;

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << " " << row % 2;
        }
        cout << endl;
    }
    getch();
}

Output
Enter a number=5
 1 1 1 1 1
  0 0 0 0
   1 1 1
    0 0
     1
    
    
 
 (iv)
//print
n
.
.
 1 0 1
  1 0
   1

    
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << " Enter a number= ";
    cin >> n;

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << " " << col % 2;
        }
        cout << endl;
    }
    getch();
}

Output
Enter a number=5
 1 0 1 0 1
  1 0 1 0
   1 0 1
    1 0
     1

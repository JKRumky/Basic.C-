//1.
(i)
Print:
            1
        1   2   1
    1   2   3   2   1
1   2   3   4   3   2   1

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    int x=0;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << "    "; //space = 4
        }
        for(col = 1; col <= row; col++)
        {
            cout << "   " << col; //space = 3
        }
        for(col = row-1; col >= 1; col--)
        {
            cout << "   " << col; //space = 3
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
1   2   3   4   5   4   3   2   1
   
   
  
(ii)
Print:
1   2   3   4   3   2   1
    1   2   3   2   1
        1   2   1
            1

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    int x=0;
    cout << "Enter a number= ";
    cin >> n;

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << "    ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << "   " << col;
        }
        for(col = row-1; col >= 1; col--)
        {
            cout << "   " << col;
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5 
1   2   3   4   5   4   3   2   1
    1   2   3   4   3   2   1
        1   2   3   2   1
            1   2   1
                1
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  

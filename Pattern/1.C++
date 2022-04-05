//1.
//Print:
 1
 1 2
 1 2 3
 .
 .
 n

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <=n ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << " " << col;
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 
 
 //###########################################
//2.
//print
 //Print
 1
 2 2
 3 3 3
 .
 .
 n
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 int main()
 {
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <=n ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << " " << row;
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

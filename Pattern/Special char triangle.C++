(i)
//Print
 * 
 *  * 
 *  *  * 
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
            cout << " * ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 

 
(ii)
//Print
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
    for(row = n-1; row >=1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 


(iii)
//Print
    * 
   * * 
  * * * 
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
 
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

 
(iv)
//Print
* * * * * 
 * * * * 
  * * * 
   * * 
    *

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;
 
    for(row = n; row >= 1; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* * * * * 
 * * * * 
  * * * 
   * * 
    *
    
 
(v)
//Print
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << " Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

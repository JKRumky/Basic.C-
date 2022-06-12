//1.
(i)
Print:
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
 
 
(ii)
Print:
 n
 .
 .
 1 2 3
 1 2
 1
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number = ";
    cin >> n;

    for(row = n; row >= 1; row--)
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
Enter a number = 5
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
 
 
###########################################
//2.
(i)
Print
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

 
(ii)
Print
 3 3 3
 2 2
 1
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

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout <<" "<< row;
        }
        cout << endl;
    }   
    getch();
}


//Output:
Enter a number=5
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1

 
###########################################
//3.
(i)
Print
 1
 1 2
 1 2 3
 1 2 3
 1 2
 1
 
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
            cout <<" "<< col;
        }
        cout << endl;
    }   
    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout <<" "<< col;
        }
        cout << endl;
    }
    getch();
}


//Outpur
Enter a number= 3
 1
 1 2
 1 2 3
 1 2 3
 1 2
 1

 
(ii)
Print
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3
 1 2
 1
 
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
            cout <<" "<< col;
        }
        cout << endl;
    }   
    for(row = n-1; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout <<" "<< col;
        }
        cout << endl;
    }
    getch();
}

//Output
Enter a number= 4
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3
 1 2
 1
 
 
(iii)
Print
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1

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
            cout <<" "<< row;
        }
        cout << endl;
    }   
    for(row = n-1; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout <<" "<< row;
        }
        cout << endl;
    }
    getch();
}

//Output
Enter a number= 5
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1
 
 
###########################################
//4.
(i)
Print
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 
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
        for(col  = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << " " << col;
        }
        cout << endl;
    }
    getch();
}

//Output
Enter a number= 5
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5


(i2)
Print
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
 
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
        for(col  = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << " " << row;
        }
        cout << endl;
    }
    getch();
}

//Output
Enter a number= 5
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
















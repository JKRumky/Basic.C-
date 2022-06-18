###################################################################
1. Matrix:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row,col;
    int A[2][3]={{10,20,30},{40,50,60}};

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
    getch();
}
//output:
10 20 30 
40 50 60 
###################################################################
2. User input matrix:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row,col;
    int A[2][3];

    cout << "Enter the elements for the matrix= " << endl;
    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout << "A[" << row <<"]["<< col <<"] = ";
            cin >> A[row][col];
        }
    }

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
    getch();
}
//output:
Enter the elements for the matrix= 
A[0][0] = 1
A[0][1] = 2
A[0][2] = 3
A[1][0] = 4
A[1][1] = 5
A[1][2] = 6
1 2 3 
4 5 6 
###################################################################
5. :
#include<iostream>
#include<conio.h>
using namespace std;

int main()

//output:
###################################################################
5. :
#include<iostream>
#include<conio.h>
using namespace std;

int main()

//output:
###################################################################
5. :
#include<iostream>
#include<conio.h>
using namespace std;

int main()

//output:


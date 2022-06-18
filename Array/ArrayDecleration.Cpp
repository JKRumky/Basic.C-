###################################################################
1. Array Decleration:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    int marks[]={1,2,3,4,5};

    for(i = 0; i < 4; i++)
    {
        cout << marks[i] << " " << endl;
    }
     getch();
}
//output:
1 
2 
3 
4 
###################################################################
2. Printing an Array:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    int marks[5];

    for(i = 0; i < 5; i++)
    {
        cout << "Marks for student " << i+1 << " = ";
        cin >> marks[i];
    }
    cout << "marks are : ";

    for(i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    getch();
}
//output:
Marks for student 1 = 23
Marks for student 2 = 34
Marks for student 3 = 42
Marks for student 4 = 33
Marks for student 5 = 45
marks are : 23 34 42 33 45 
###################################################################
3. Students database:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, sum=0;

    cout << "Enter NUmber of Students = ";
    cin >> n;

    int students[n];

    for(i = 0; i < n; i++)
    {
        cin >> students[i];
        sum = sum + students[i];
    }
    cout << "Total marks : " << sum << endl;

    float avg;
    avg = (float) sum / n;

    cout << "Average : " << sum/n << endl;

    int max, min;
    max = students[0];
    min = students[0];

    for(i = 1; i < n; i++)
    {
        if(max < students[i])
        {
            max = students[i];
        }
        if(min > students[i])
        {
            min = students[i];
        } 
    }
    cout << "Maximum marks = " << max << endl;
    cout << "Minimum marks = " << min << endl;

    getch();
}
//output:
Enter NUmber of Students = 5
23 43 52 67 78
Total marks : 263
Average : 52
Maximum marks = 78
Minimum marks = 23
###################################################################
4. Linear search:
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[] = {10,20,30,40,50,60};
    int value, pos= -1, i;

    cout << "Enter the number= ";
    cin >> value;

    for(i=0; i < 7; i++)
    {
        if(value == A[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    {
        cout << "Item is not found ";
    }else
    {
        cout << "Item is found " << pos;
    }
    getch();
}
//output:
Enter the number= 40
Item is found 4
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
###################################################################
5. :
#include<iostream>
#include<conio.h>
using namespace std;

int main()

//output:

















  
  
  
  

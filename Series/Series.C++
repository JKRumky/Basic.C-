//Question- 1:

// 1^5 + 2^5 + 3^5 + .......... + n^5 = ?

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    int i, n, sum = 0;
    
    cout << "Enter the last number: ";
    cin >> n;

    for(i = 1; i <= n; i += 1)
    {
        sum = sum + pow(i, 5);
    }
    cout << "Sum = " << sum;
    getch();
}



//Question- 2
//1 +  1/2 + 1/3 + .......... + 1/n = ?

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    double i, n, sum = 0;
    
    cout << "Enter the last number: ";
    cin >> n;

    for(i = 1; i <= n; i += 1)
    {
        sum = sum + (1/i);

        if(i == 1)
        {
           cout << "1 + "; 
        }else if(i == n)
        {
            cout << " 1/" << i;
        }else
        {
            cout << " 1/" << i << " +";
        }
    }
    cout << " = " << sum;
    getch();
}
/*
Output:
Enter the last number: 5
1 +  1/2 + 1/3 + 1/4 + 1/5 = 2.28333
*/


//Question- 3
//1 * 2 * 3 * ........ * n = ?

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, n, result = 1;
    cout << "Enter a number = ";
    cin >> n;
    
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    cout << "Result = " << result;
    getch();
}
/*
Output:
Enter a number = 5
Result = 120
*/

//Question- 4
//1^2 * 2^2 * 3^2 *..........* n^2 = ?

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    int i, n, result;
    result = 1;

    cout << "Enter Number = ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        result = result * pow(i,2);
    }
    cout << "Result = " << result;
    getch();
}
/*
Output:
Enter Number= 5
Result = 14400
*/


//Question- 5
//1^2 * 3^2 * 5^2 *..........* n^2 = ?

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    int i, n, result;
    result = 1;

    cout << "Enter Number = ";
    cin >> n;

    for(i = 1; i <= n; i = i+2)
    {
        result = result * pow(i,2);
    }
    cout << "Result = " << result;
    getch();
}

//Question- 6
//1 - 2 + 3 - 4 + 5 - 6 = ?
//(1 + 3 + 5) - (2 + 4 + 6)

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, n, even=0, odd=0, sum;
    cout << "Enter Last Number= ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            even = even + i;
        }else{
            odd = odd + i;
        }
    }
    sum = odd - even;
    cout << "Sum= " << sum;
    getch();
}
/*
Output:
Enter Last Number= 6
Sum= -3
*/

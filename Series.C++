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

    for(i = 1; i <= n; i+=1)
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

    for(i = 1; i <= n; i+=1)
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

//Multiplication Table:

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int i, num, mul;
  
   cout << "Enter any Number = ";
   cin >> num;
  
   for(i = 1; i <= 10; i++)
   {
      mul = num * i;
      cout << num << "*" << i << "=" << mul << endl;
   }
   getch();
}


/*Output:
Enter Number = 10
10*1=10
10*2=20
10*3=30
10*4=40
10*5=50
10*6=60
10*7=70
10*8=80
10*9=90
10*10=100
*/

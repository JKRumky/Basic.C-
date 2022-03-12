//temperature
// celsius to Fahrenheit
// Fahrenheit to Kelvin

#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    double Celsius, Fahrenheit, Kelvin;
    cout << "Enter Celsius = ";
    cin >> Celsius;
    Fahrenheit = 1.8 * Celsius + 32;
    cout << "Fahrenheit = " << Fahrenheit << endl;
    Kelvin = Celsius + 273;
    cout << "Kelvin = " << Kelvin;
    getch();
}

/*
OUTPUT:
Enter Celsius = 50
Fahrenheit = 122
Kelvin = 323
*/

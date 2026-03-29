#include <iostream>   
#include <string>    
using namespace std;


int ReadNum8(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int DigitFrequency(int num, int digit) {

    int Remainder = 0;
    int counter = 0;

    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        if (Remainder == digit)
        {
            counter++;
        }
        
    }

    return counter;

}

int main()
{
    int num = ReadNum8("Enter Number: ");
    short digit = ReadNum8("Enter Digit: ");
    cout<<"Digit "<< digit <<" Frequency is "<<DigitFrequency(num, digit)<<" Time(s)";
}
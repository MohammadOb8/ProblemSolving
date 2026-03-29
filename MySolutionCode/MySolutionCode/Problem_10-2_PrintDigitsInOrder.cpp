#include <iostream>   
#include <string>    
using namespace std;


int ReadNum10(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int ReverseNum(int num) {

    int Remainder = 0;
    int num2 = 0;

    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        num2 = num2 * 10 + Remainder;
    }

    return num2;

}

void PrintDigitsOrder(int num) {

    int Remainder = 0;
    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    int num = ReadNum10("Enter Number: ");
    PrintDigitsOrder(ReverseNum(num));

}
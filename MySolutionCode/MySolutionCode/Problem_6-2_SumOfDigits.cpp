#include <iostream>
#include<string>
#include "Problem_0-2_ReadNum.h"
using namespace std;

/*
int ReadNum(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}*/

int SumDigits(int num) {

    int Remainder = 0;
    int sum = 0;
    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        sum += Remainder;
    }
    return sum;
}

/*
int main()
{
   cout<<"Sum of digits: "<< SumDigits(ReadNum6("Enter Number:"));
}*/
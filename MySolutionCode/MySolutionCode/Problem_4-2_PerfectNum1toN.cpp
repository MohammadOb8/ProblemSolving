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

int Sum_of_Divisors(int num) {

    int sum = 0;
    for (int counter = 1; counter < num; counter++) {

        if (num % counter == 0)
        {
            sum += counter;
        }

    }
    return sum;

}

void printResult(int num) {

    for (int i = 1; i <= num; i++)
    {
        int DivisorsSum = Sum_of_Divisors(i);

        if (DivisorsSum == i) {
            cout << i << " = " << DivisorsSum << " is Perfect" << endl;
        }
        else
        {
            cout << i << " != " << DivisorsSum << " is not perfect" << endl;
        }

    }
}

/*
int main()
{
    int num = ReadNum2("Enter Number");
    printResult(num);
}*/
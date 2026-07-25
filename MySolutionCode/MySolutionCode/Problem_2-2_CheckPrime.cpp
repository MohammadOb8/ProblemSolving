#include <iostream>
#include<string>
#include "Problem_0-2_ReadNum.h"
#include "Problem_2-2_CheckPrime.h"
using namespace std;

/*
enum enuPrime
{
    Prime = 1, notPrime = 2
};
*/

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

enuPrime checkPrime(int num) {

    int M = round(num / 2);

    for (int counter = 2; counter <= M; counter++) {

        if (num % counter == 0)
        {
            return enuPrime::notPrime;
        }
    }

    return enuPrime::Prime;
}

void printRes(enuPrime Res) {
    if (Res == enuPrime::Prime) {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

void printPrime(int num) {
    for (int i = 1; i <= num; i++)
    {
        cout << i << "  ";
        printRes(checkPrime(i));

    }
}

/*
int main()
{
    int num = ReadNum("Enter Number");
    printPrime(num);
}*/



#include <iostream>
#include<string>
using namespace std;

enum enuPrime
{
    Prime = 1, notPrime = 2
};

float ReadNum(string msg) {
    float num;
    cout << msg << endl;
    cin >> num;
    return num;
}

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



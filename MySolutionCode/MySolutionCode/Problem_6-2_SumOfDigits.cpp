#include <iostream>
#include<string>
using namespace std;

int ReadNum6(string msg) {
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

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

int main()
{
   cout<<"Sum of digits: "<< SumDigits(ReadNum6("Enter Number:"));
}
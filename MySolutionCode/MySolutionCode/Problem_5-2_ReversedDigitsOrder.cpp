#include <iostream>
#include<string>
using namespace std;

int ReadNum5(string msg) {
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

void RevertNum(int num) {
    
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
    RevertNum(ReadNum5("Enter Number:"));
}
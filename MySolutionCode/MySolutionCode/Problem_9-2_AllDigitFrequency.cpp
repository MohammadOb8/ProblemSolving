#include <iostream>   
#include <string>    
using namespace std;


int ReadNum9(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int DigitFrequency2(int num, short digit) {

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

void AllDigitFreq(int num) {
    cout << endl;
    for (int i = 0; i < 10; i++) {

        short digitFreq = 0;
        digitFreq = DigitFrequency2(num, i);
        if (digitFreq > 0) {
            cout << "Digit " << i << " Frequency is " << digitFreq << " Time(s)" << endl;;
        }
    }
}

int main()
{
    int num = ReadNum9("Enter Number: ");
    AllDigitFreq(num);
   
}
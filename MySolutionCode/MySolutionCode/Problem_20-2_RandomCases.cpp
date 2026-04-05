#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_19-2_RandomNum1toN.h"
using namespace std;

enum RandomEnum
{
    SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4
};

string ReadInput()
{
    string Text;

    cout << "Please enter Text Type ( SmallLetter, CapitalLetter, SpecialChar, Digit)?\n";
    getline(cin, Text);

    return Text;
}
void RandomCase(RandomEnum textType)
{
    
     switch (textType)
     {
     case SmallLetter:
        cout << (char)RandomNumber(97, 122) << endl;
         break;
     case CapitalLetter:
         cout << (char)RandomNumber(65, 90) << endl;
         break;
     case SpecialChar:
         cout << (char)RandomNumber(33, 47) << endl;
         break;
     case Digit:
         cout << (char)RandomNumber(48, 57) << endl;
         break;
     default:
         cout << (char)RandomNumber(33, 126);
         break;
     }
    
}

int main() {

    srand((unsigned)time(NULL));

   // string r1 = ReadInput();
    RandomCase(RandomEnum::CapitalLetter);
    RandomCase(RandomEnum::SmallLetter);
    RandomCase(RandomEnum::SpecialChar);
    RandomCase(RandomEnum::Digit);
    return 0;
}
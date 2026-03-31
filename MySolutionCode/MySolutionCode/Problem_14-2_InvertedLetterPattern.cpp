#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
using namespace std;

void Inverted_Letter_Pattern(int num) {

    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            char c = i + 64;
            cout << c;
        }
        cout << endl;
    }
}

int main()
{
    int num = ReadNum("Enter Number: ");
    Inverted_Letter_Pattern(num);
}


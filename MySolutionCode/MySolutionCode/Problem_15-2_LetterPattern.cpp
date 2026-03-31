#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
using namespace std;

void Letter_Pattern(int num) {

    for (int i = 1; i <= num; i++)
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
    Letter_Pattern(num);
}


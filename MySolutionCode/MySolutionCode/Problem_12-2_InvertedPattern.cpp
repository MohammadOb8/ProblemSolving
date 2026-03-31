#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
using namespace std;

void Inverted_Pattern(int num) {
   
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

}

int main()
{
    int num = ReadNum("Enter Number: ");
    Inverted_Pattern(num);

}


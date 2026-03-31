#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
using namespace std;

void Number_Pattern(int num) {

    for (int i = 1; i <= num; i++)
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
    Number_Pattern(num);

}


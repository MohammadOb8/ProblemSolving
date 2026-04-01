#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
using namespace std;

void AAA_to_ZZZ() {

    for (int i = 1; i <= 26; i++)
    {
        
        for(int k=1;k<=26;k++)
        {
           
            for (int j = 1; j <= 26; j++)
            {
                char c1 = i + 64;
                cout << c1;
                char c2 = k + 64;
                cout << c2;
                char c3 = j + 64;
                cout << c3<<endl;;
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    
    AAA_to_ZZZ();
}


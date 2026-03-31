#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
#include "Problem_7-2_ReverseNumber.h"
using namespace std;

void Check_Palindrome_Number() {
    int num = ReadNum("Enter Number: ");
    if (ReverseNumber(num) == num) {
        cout << "Yes, Its a Palindrome Number" << endl;
    }
    else
    {
        cout << "No, its not a Palindrome Number" << endl;
    }
}

int main()
{
    Check_Palindrome_Number();

}


#include <iostream>   
#include <string>    
#include "Problem_0-2_ReadNum.h"
#include "Problem_5-2_ReversedDigitsOrder.h"
#include "Problem_7-2_ReverseNumber.h"
using namespace std;

void PrintDigitsInOrder() {
    int num = ReadNum("Enter Number: ");
    RevertNum(ReverseNumber(num));
}

/*
int main()
{
    PrintDigitsInOrder();

}*/


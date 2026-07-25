#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_19-2_RandomNum1toN.h"
using namespace std;

enum charType
{
    SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4
};

char RandomCase(charType textType)
{

    switch (textType)
    {
    case charType::SmallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case charType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case charType::SpecialChar:
    {

        return char(RandomNumber(33, 47));
        break;
    }
    case charType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }

    }
}
/*
int main() {

    srand((unsigned)time(NULL));

    RandomCase(charType::CapitalLetter);
    RandomCase(charType::SmallLetter);
    RandomCase(charType::SpecialChar);
    RandomCase(charType::Digit);
    
}*/
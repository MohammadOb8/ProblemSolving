#pragma once
#ifndef PROBLEM_20_2_RandCases
#define PROBLEM_20_2_RandCases

enum charType
{
    SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4
};

char RandomCase(charType textType);
#endif

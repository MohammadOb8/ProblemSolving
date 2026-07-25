#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_21-2_GenerateKeys.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_28-2_CopyArray.h"
using namespace std;

void Generate_Random_Array_Keys(string arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = GenerateKey(1);
    }
}

void PrintStringArray(string arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << "Array["<< i <<"]: "<< arr[i] << endl;

    cout << "\n";
}

/*
int main() {

    srand((unsigned)time(NULL));
    string Array[100];
    int arrLength = ReadNum("Enter Number of Keys: ");

    Generate_Random_Array_Keys(Array, arrLength);
    cout << "\nArray 1 Keys elements:\n";
    PrintStringArray(Array, arrLength);

}*/
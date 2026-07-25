#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_28-2_CopyArray.h"
using namespace std;


void Reverse_Array(int arr[100], int RevArr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++) 
    {
        RevArr[i] = arr[arrLength-1-i];
    }
}
/*
int main() {

    srand((unsigned)time(NULL));
    int Array[100];
    int RevArray[100];
    int arrLength = ReadNum("Enter Number of array elements: ");

    Random_Array_elements(Array, arrLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(Array, arrLength);

    Reverse_Array(Array, RevArray, arrLength);
    cout << "\nArray 2 elements:\n";
    PrintArray(RevArray, arrLength);
}*/
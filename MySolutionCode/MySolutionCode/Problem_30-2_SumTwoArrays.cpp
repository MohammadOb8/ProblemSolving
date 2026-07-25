#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_26-2_SumRandomArray.h"
using namespace std;

void Sum_Two_Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrSize )
{
    for (int i = 0; i < arrSize; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}
/*
int main() {

    srand((unsigned)time(NULL));
    int array1[100];
    int array2[100];
    int arrays_Sum[100];
    int arrSize = ReadNum("Enter Number of array elements: ");
    
    Random_Array_elements(array1, arrSize);
    Random_Array_elements(array2, arrSize);

    cout << "\nArray 1 elements:\n";
    PrintArray(array1, arrSize);
    cout << "\nArray 2 elements:\n";
    PrintArray(array2, arrSize);

    Sum_Two_Arrays(array1, array2, arrays_Sum, arrSize);
    cout << "\nSum of array1 & array2 elements:\n";
    PrintArray(arrays_Sum, arrSize);
}
*/
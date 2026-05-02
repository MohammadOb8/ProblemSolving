#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_2-2_CheckPrime.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_28-2_CopyArray.h"
using namespace std;

void Copy_Only_Primary_Numbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Lenght)
{
    int Counter = 0; 

 
    for (int i = 0; i < arrLength; i++)
    {
        
        if (checkPrime(arrSource[i]) == enuPrime::Prime)
        {
            
            arrDestination[Counter] = arrSource[i];
            Counter++; 
            
        }
    }

    arr2Lenght = Counter;
}


int main() {

	srand((unsigned)time(NULL));
	int array1[100];
	int arr1Size = ReadNum("Enter Number of array elements: ");
	int array2[100];
	int arr2Size = 0;

	Random_Array_elements(array1, arr1Size);
    Copy_Only_Primary_Numbers(array1, array2, arr1Size, arr2Size);

    cout << "\nArray 1 elements:\n";
    PrintArray(array1, arr1Size);
    cout << "\nPrime Numbers in Array2:\n";
    PrintArray(array2, arr2Size);
}

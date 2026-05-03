#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"

using namespace std;


void FillArrayWith1toN(int arr[100], int arrLength)
{
  
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

void Swap(int& A, int& B)
{
    int temp = A;
    A = B;
    B = temp;
}

void Shuffle_Array(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        int index1 = RandomNumber(1, arrLength)-1;
        int index2 = RandomNumber(1, arrLength)-1;

        Swap(arr[index1], arr[index2]);
    }
}

int main() {

    srand((unsigned)time(NULL));
    int array[100];
    int arrLength = ReadNum("Enter Number of array elements: ");

    FillArrayWith1toN(array, arrLength);
    cout << "\nArray  elements before shuffle:\n";
    PrintArray(array, arrLength);
    
    Shuffle_Array(array, arrLength);
    cout << "\nArray  elements after shuffle:\n";
    PrintArray(array, arrLength);
  
}

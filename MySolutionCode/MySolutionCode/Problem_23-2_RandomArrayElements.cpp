#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
using namespace std;

void Random_Array_elements(int arr[], short arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		
		arr[i] = RandomNumber(1, 100);
	
	}
}

void FillArrayWith1toN(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}
/*
int main() {

	srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	PrintArray(arrElements, arrSize);
}*/

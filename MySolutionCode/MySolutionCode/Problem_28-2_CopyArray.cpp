#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_26-2_SumRandomArray.h"
using namespace std;

void Copy_Random_Array(int arr1[], int arr2[], int arrSize) {

	
	for (int i = 0; i < arrSize; i++)
	{
		arr2[i] = arr1[i];
		cout << "Element [" << i << "]: ";
		cout << arr2[i] << endl;
	}
	
}
int main() {

	srand((unsigned)time(NULL));
	int array1[100];
	int array2[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(array1, arrSize);
	cout << "copy array: " << endl;
	Copy_Random_Array(array1, array2, arrSize);
}

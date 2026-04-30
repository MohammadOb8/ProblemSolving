#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_26-2_SumRandomArray.h"
using namespace std;

float Avg_Random_Array_Element(int arr[], int arrSize) {

	return (float)Sum_Random_Array_Element(arr, arrSize)/arrSize;
}
int main() {

	srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	cout << "Avg of Elements: " << Avg_Random_Array_Element(arrElements, arrSize);
}

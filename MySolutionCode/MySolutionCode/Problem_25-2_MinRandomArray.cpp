#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
using namespace std;

int Min_Random_Array_Element(int arr[], int arrSize) {
	int min = arr[0];
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] <= min) {
			min = arr[i];
		}
	}
	return min;
}
int main() {

	srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	cout << "Max Element: " << Min_Random_Array_Element(arrElements, arrSize);
}

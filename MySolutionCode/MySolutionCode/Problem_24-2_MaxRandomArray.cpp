#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_19-2_RandomNum1toN.h"
#include "Problem_23-2_RandomArrayElements.h"
using namespace std;

int Max_Random_Array_Element(int arr[], int arrSize) {
	int max = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int main() {

	srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	cout<<"Max Element: "<< Max_Random_Array_Element(arrElements, arrSize);
}

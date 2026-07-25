#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_23-2_RandomArrayElements.h"
#include "Problem_34-2_ReturnNumberIndexArray.h"
using namespace std;

bool CheckNum(int num, int arr[100], int arrSize) {

	return Searching_for_number(arr, arrSize, num) != -1;
}

int main() {

	srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	PrintArray(arrElements, arrSize);
	int Searched_Number = ReadNum("Enter  a number to search for: ");
	if (CheckNum(Searched_Number, arrElements, arrSize))
		cout << "Number " << Searched_Number << " is found " << endl;
	else {
		cout << "Number " << Searched_Number << " not found " << endl;
		
	}
}
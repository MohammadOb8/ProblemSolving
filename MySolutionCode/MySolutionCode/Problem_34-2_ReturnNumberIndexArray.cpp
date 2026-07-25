#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_23-2_RandomArrayElements.h"
using namespace std;

int Searching_for_number(int arr[], int arrSize, int Searched_numbered) {
	for (int i = 0; i < arrSize; i++)
	{
		if (Searched_numbered == arr[i])
			return i;

	}
	return -1;
}

/*
int main() {

    srand((unsigned)time(NULL));
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Random_Array_elements(arrElements, arrSize);
	PrintArray(arrElements, arrSize);
	int Searched_Number = ReadNum("Enter  a number to search for: ");
	int Founded_number = Searching_for_number(arrElements, arrSize, Searched_Number);
	if (Founded_number == -1)
		cout << "Number not found" << endl;
	else {
		cout << "the number found at postion: " << Founded_number << endl;
		cout << "the number found its order: " << Founded_number + 1 << endl;
	}
}*/
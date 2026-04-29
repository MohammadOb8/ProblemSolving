#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
using namespace std;

void Input_Array_elements(int arr[], short arrSize)
{
	
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Element [" << i << "]: ";
		cin >> arr[i];
	}
}

void Check_Elements(int arr[], int arrsize, short element)
{
	int counter = 0;
	for (int i = 0; i < arrsize; i++)
	{
		if (arr[i] == element) 
		{
			counter++;
		}
	}
	cout << "Original Array: ";
	for (int i = 0; i < arrsize; i++) { cout << arr[i]<<" "; };
	cout <<endl << element << " is repeated " << counter << " Time(s)";
}

int main() {
	
	int arrElements[100];
	int arrSize = ReadNum("Enter Number of array elements: ");
	Input_Array_elements(arrElements, arrSize);
	int Element = ReadNum("Enter the Number you want to check: ");
	Check_Elements(arrElements, arrSize, Element);

}

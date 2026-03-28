#include <iostream>   
#include <string>    
using namespace std; 


int ReadNum7(string Message)
{
    int Number = 0;  
   
    do
    {
        cout << Message << endl; 
        cin >> Number;         
    } while (Number <= 0);       

    return Number;  
}

int ReverseNumber(int num) {

    int Remainder = 0;
    int num2 = 0;
    
    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        num2 = num2 * 10 + Remainder;
    }

    return num2;
    
}

int main()
{
   cout<< ReverseNumber(ReadNum7("Enter Numbr: "));
}
#include <iostream>   
#include <string>    
using namespace std;


int ReadNum(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
/*
int main()
{
   ReadNum("Enter Number");
}*/



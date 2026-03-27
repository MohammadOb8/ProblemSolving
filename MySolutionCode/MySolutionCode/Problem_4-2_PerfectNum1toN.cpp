#include <iostream>
#include<string>
using namespace std;

int ReadNum2(string msg) {
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

int Sum_of_Divisors(int num) {

    int sum = 0;
    for (int counter = 1; counter < num; counter++) {

        if (num % counter == 0)
        {
            sum += counter;
        }

    }
    return sum;

}

void printResult(int num) {

    for (int i = 1; i <= num; i++)
    {
        int DivisorsSum = Sum_of_Divisors(i);

        if (DivisorsSum == i) {
            cout << i << " = " << DivisorsSum << " is Perfect" << endl;
        }
        else
        {
            cout << i << " != " << DivisorsSum << " is not perfect" << endl;
        }

    }
}


int main()
{
    int num = ReadNum2("Enter Number");
    printResult(num);
}
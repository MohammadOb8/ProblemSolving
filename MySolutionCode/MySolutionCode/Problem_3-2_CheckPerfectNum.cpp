#include <iostream>
#include<string>
using namespace std;

int ReadNum(string msg) {
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

int checkPerfect(int num) {

    int sum = 0;
    for (int counter = 1; counter < num; counter++) {

        if (num % counter == 0)
        {
            sum += counter;
        }

    }
    return sum;

}

void printRes(int num) {
    if (checkPerfect(num) == num) {
        cout << num << " = " << checkPerfect(num) << " is Perfect" << endl;
    }
    else
    {
        cout << num << " != " << checkPerfect(num) << " is not perfect" << endl;
    }

}

/*
int main()
{
    int num = ReadNum("Enter Number");
    printRes(num);
}*/

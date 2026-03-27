#include <iostream>
#include<string>
using namespace std;

void printHeader() {
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << endl << "__________________________________________________________________________________" << endl;
}

void printcol() {

    for (int i = 1; i <= 10; i++) {
        cout << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;;
    }
}

int main()
{
    printHeader();
    printcol();
}
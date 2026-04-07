#include <iostream>   
#include <string>   
#include <cstdlib>    
#include <ctime>  
#include "Problem_0-2_ReadNum.h"
#include "Problem_20-2_RandomCases.h"
using namespace std;

string GenerateWord(charType charType, short length)
{
	string word;
	for (int i = 0; i < length; i++)
	{
		word = word + RandomCase(charType);
	}
	return word;
}

string GenerateKey(int NumOfKeys)
{
	string Key = "";
	Key = GenerateWord(charType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(charType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(charType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(charType::CapitalLetter, 4);
	return Key;
}

void GeneratKeys(short NumOfKeys) {
	for (int i = 1; i <= NumOfKeys; i++)
	{
		cout << "Key [" << i << "]: ";
		cout << GenerateKey(NumOfKeys) << endl;
	}
}

int main() {

    srand((unsigned)time(NULL));
	GeneratKeys(ReadNum("Enter number of keys to generte: "));

}
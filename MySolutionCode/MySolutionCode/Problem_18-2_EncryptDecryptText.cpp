#include <iostream>   
#include <string>    
using namespace std;

string ReadText()
{
    string Text;  

    cout << "Please enter Text?\n"; 
    getline(cin, Text);             

    return Text; 
}

string EncryptText(string text) {
    
    
    int textLength = text.length();
    cout << "Text Befor Encryption: " << text << endl;
        cout << "Text After Encryption: ";
    for (int i = 0; i <= textLength; i++)
    {
        text[i] = (char)text[i] + 2;
        cout <<  text[i];
    }
    cout << endl;
    return text;
}

string DecryptText(string text) {


    int textLength = text.length();
       
        cout << "Text After Decryption: ";
    for (int i = 0; i <= textLength; i++)
    {
        text[i] = (char)text[i] - 2;
        cout << text[i];
    }
    return text;
}
        
int main()
{
    DecryptText(EncryptText(ReadText()));
}


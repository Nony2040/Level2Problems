#include <iostream>
#include <string>

// Enter a Word and (Encrypt & Decrypt) it

using namespace std;

string ReadWord(string message)
{
    string Pass;
    cout << message << "\n";
    getline(cin, Pass);
    return Pass;
}

string EncryptTheWord(string text, int Key)
{
    int WordLength = text.length();
    string EncryptedWord = "";

    for (int i = 0; i < WordLength; i++)
    {
        char CharOfWordI = text[i];
        CharOfWordI += Key;
        EncryptedWord = EncryptedWord + CharOfWordI;
    }
    return EncryptedWord;
}
string DecryptTheWord(string text, int Key)
{
    int WordLength = text.length();
    string DecryptedWord = "";

    for (int i = 0; i < WordLength; i++)
    {
        char CharOfWordI = text[i];
        CharOfWordI -= Key;
        DecryptedWord = DecryptedWord + CharOfWordI;
    }
    return DecryptedWord;
}

void print()
{
    int const Key = 2;
    string TheWord = ReadWord("Enter a Word");
    string encrypt = EncryptTheWord(TheWord, Key);
    string decrypt = DecryptTheWord(encrypt, Key);

    cout << "The Original word = " << TheWord << endl;
    cout << "-----------------------------------------\n";
    cout << " The Word After Encryption = " << encrypt << endl;
    cout << "-----------------------------------------\n";
    cout << " The Word After Decryption = " << decrypt << endl;
}

int main()
{
    print();
    return 0;
}
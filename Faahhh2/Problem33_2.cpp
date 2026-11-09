#include <iostream>
#include <string>
#include <cstdlib>
/*Generate N Keys  (small/capital Letter),(special Char),(Digit) */
// read how many keys to generate and fill  them in array
using namespace std;
enum enCharType
{
    Small = 1,
    Capital,
    Special,
    Digit
};

int ReadPosNum(string Message)
{
    int Num;
    do
    {

        cout << Message << " ....\n";
        cin >> Num;
    } while (Num < 0);

    return Num;
}
char RandomThing(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return (char)Num;
}
char GetRandomChar(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::Capital:
        return RandomThing(65, 90);

    case enCharType::Small:
        return RandomThing(97, 122);

    case enCharType::Special:
        return RandomThing(33, 47);

    case enCharType::Digit:
        return RandomThing(48, 57);
    }
    return ' ';
}
string GenerateWord(int WordLength, enCharType CharType)
{
    string Word = "";
    for (int i = 1; i <= WordLength; i++)
    {
        Word += GetRandomChar(enCharType::Capital);
    }
    return Word;
}
string GenerateKey(int KeyLength, int WordLength, enCharType CharType)
{
    string Key = "";
    for (int i = 1; i <= KeyLength + KeyLength - 1; i++)
    {
        if (i % 2 == 0)
        { // 1111-1111-1111-1111-1111 5
            Key += "-";
        }
        else
            Key += GenerateWord(WordLength, CharType);
    }
    return Key;
}
void FillArrayWithKeys(int X, string Arr[])
{
    for (int i = 0; i < X; i++)
    {
        Arr[i] = GenerateKey(5, 4, enCharType::Capital);
    }
}
void PrintKeys(int X, string Arr[])
{
    for (int i = 0; i < X; i++)
    {
        cout << "Array [" << i << "]  : " << Arr[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    string Arr[100];
    int X = ReadPosNum("Enter How Many Keys u Want");
    FillArrayWithKeys(X, Arr);
    PrintKeys(X, Arr);

    return 0;
}
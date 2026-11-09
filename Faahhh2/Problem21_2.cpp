#include <iostream>
#include <string>
#include <cstdlib>
/*Generate N Keys  (small/capital Letter),(special Char),(Digit) */
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
void PrintKeys()
{
    int X = ReadPosNum("Enter How Many Keys u Want");
    for (int i = 1; i <= X; i++)
    {
        cout << "Key [" << i << "]  : " << GenerateKey(5, 4, enCharType::Capital) << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    PrintKeys();

    return 0;
}
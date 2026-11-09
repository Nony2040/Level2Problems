#include <iostream>
#include <string>
#include <cstdlib>
/*Random (small/capital Letter),(special Char),(Digit) */
using namespace std;
enum enRandomThing
{
    Small = 1,
    Capital,
    Special,
    Digit
};

int ReadPosNum(string Message)
{
    int Num;
    cout << "\nSmall letter\t(1)\nCapital Letter\t(2)\nSpecial Character\t(3)\nDigit\t(4)\n";
    do
    {

        cout << Message << " ....\n";
        cin >> Num;
    } while (Num < 0 || Num > 4);

    return Num;
}

char RandomThing(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return (char)Num;
}

void PrintRandom()
{
    int X = ReadPosNum("Enter a Numer \n");
    switch (X)
    {

    case enRandomThing::Small:
        cout << (char)RandomThing(97, 122);
        break;

    case enRandomThing::Capital:
        cout << (char)RandomThing(65, 90);
        break;

    case enRandomThing::Digit:
        cout << (char)RandomThing(48, 57);
        break;

    case enRandomThing::Special:
        cout << (char)RandomThing(33, 47);
        break;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    PrintRandom();
    return 0;
}
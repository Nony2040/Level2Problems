#include <iostream>
/*
Read Number and check if  it's Palindrom er no
12321 == 12321
 */
using namespace std;

int ReadPosetiveN(string message)
{
    int Number, counter = 0;
    do
    {
        if (counter == 0)
            cout << message << '\n';

        else
            cout << "Enter A Positive Number.\n";

        cin >> Number;
        counter++;
    } while (Number <= 0);

    return Number;
}

int ReverseNum(int Number1)
{

    int Number2 = 0, X = 0;
    while (Number1 != 0)
    {
        X = Number1 % 10;
        Number1 /= 10;

        Number2 = Number2 * 10 + X;
    }
    return Number2;
}

bool CheckIfPalindrome(int Num1, int Num2)
{
    return Num1 == Num2;
}

void PrintResult()
{

    int Num1, Num2;
    Num1 = ReadPosetiveN("Enter Positive Number");
    Num2 = ReverseNum(Num1);

    if (CheckIfPalindrome(Num1, Num2))
        cout << "Palindrome..\n";
    else
        cout << "NOT Palindrome..\n";
}
int main()
{
    PrintResult();

    return 0;
}
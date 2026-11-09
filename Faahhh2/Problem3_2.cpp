#include <iostream>
// Check if the number is perfect or not
// Perfect Number=sum(all divisors)
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

bool CheckPerfectNum()
{
    int Num = ReadPosetiveN("ENTER Positive Num To Check if it's PERFECT... ");
    int Sum = 0;

    for (int i = 1; i < Num; i++)
    {
        if (Num % i == 0)
            Sum += i;
    }

    return Sum == Num;
}

void PrintResult()
{
    if (CheckPerfectNum())
        cout << "The Number is PERFECT..\n";

    else
        cout << "The Number is NOT Perfect..\n";
}

int main()
{
    PrintResult();
    return 0;
}

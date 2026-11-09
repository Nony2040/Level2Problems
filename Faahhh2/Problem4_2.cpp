#include <iostream>
// Print all PERFSECT Numbers from 1 to N
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

bool CheckPerfectNum(int NumI)
{

    int Sum = 0;

    for (int i = 1; i < NumI; i++)
    {
        if (NumI % i == 0)
            Sum += i;
    }

    return Sum == NumI;
}

void PrintPerfectNumber_From1toN()
{
    int N = ReadPosetiveN("Enter Number N to Print All PERFECT Nums from 1 to N");
    for (int i = 1; i < N; i++)
    {
        if (CheckPerfectNum(i))
            cout << i << endl;
    }
}
int main()
{
    PrintPerfectNumber_From1toN();

    return 0;
}

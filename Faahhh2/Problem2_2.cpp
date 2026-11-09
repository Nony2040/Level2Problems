#include <iostream>
using namespace std;
// print priamary numbers from 1 to n

enum EnPrime
{
    NotPrimary = 0,
    Primary
};

int ReadPosetiveN(string message)
{
    int Number;
    do
    {
        cout << "\t" << message << '\n';
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

EnPrime Check_If_I_Primary_Num(int NumI)
{
    int HalfNum = NumI / 2;

    for (int i = 2; i <= HalfNum; i++)
    {

        if (NumI % i == 0)
            return EnPrime::NotPrimary;
    }
    return EnPrime::Primary;
}
void Print_Prime_Nums_From1ToN(int N)
{

    for (int i = 1; i <= N; i++)
    {
        if (Check_If_I_Primary_Num(i))
            cout << i << " \n";
    }
}

int main()
{

    Print_Prime_Nums_From1ToN(ReadPosetiveN("Enter Number"));

    return 0;
}
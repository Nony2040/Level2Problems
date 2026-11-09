#include <iostream>
// #include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
// Then PRINT the PRIMARY Nums in ARRAY
using namespace std;

enum EnPrime
{
    Prime = 1,
    NotPrime
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
int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}
void FillArray(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        cout << Arr[i] << " ";
    }
}
EnPrime CheckPrimeNums(int x)
{
    if (x == 1)
        return EnPrime::NotPrime;
    if (x == 2)
        return EnPrime::Prime;

    for (int i = 2; i < (x / 2) + 1; i++)
    {
        if (x % i == 0)
            return EnPrime::NotPrime;
    }
    return EnPrime::Prime;
}

void PrintPrimeNumber(int ArraySize, int Arr[])
{
    int counter = 0;
    for (int i = 0; i < ArraySize; i++)
    {
        if (CheckPrimeNums(Arr[i]) == EnPrime::Prime)
        {
            cout << Arr[i] << " ";
            counter++;
        }
    }
    if (counter == 0)
        cout << "There is No Prime Numbers!!\n";
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArraySize = ReadPosNum("Enter Number Of Elements");
    FillArray(ArraySize, Arr);
    cout << "-----------------\n";
    cout << "Array Elements: ";
    PrintArray(ArraySize, Arr);
    cout << "\n";
    PrintPrimeNumber(ArraySize, Arr);

    return 0;
}

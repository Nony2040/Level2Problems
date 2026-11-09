#include <iostream>
#include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
using namespace std;

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
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}
void FillArr(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArr(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArraySize = ReadPosNum("Enter Number Of Elements");

    FillArr(ArraySize, Arr);
    cout << "-----------------\n";
    PrintArr(ArraySize, Arr);
    return 0;
}

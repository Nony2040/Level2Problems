#include <iostream>
// #include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
// Then PRINT the SUM of The ARRAY ELEMENTS
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
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
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
int CalcTheSum(int ArraySize, int Arr[])
{
    int Counter = 0;
    for (int i = 0; i < ArraySize; i++)
    {
        Counter += Arr[i];
    }
    return Counter;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArraySize = ReadPosNum("Enter Number Of Elements");
    FillArr(ArraySize, Arr);
    cout << "-----------------\n";
    cout << "Array Elements: ";
    PrintArr(ArraySize, Arr);
    cout << "\nSum of All Numbers is : " << CalcTheSum(ArraySize, Arr) << endl;

    return 0;
}

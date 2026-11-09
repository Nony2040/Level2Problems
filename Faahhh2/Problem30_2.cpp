#include <iostream>
// #include <cstdlib>
// Fill 2 arrays with max size 100
// with random nums from 1 to 100
// and sum their elements in 3rd array
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

void SumArr1Arr2intoArr3(int ArraySize, int Arr1[], int Arr2[], int Arr3[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        Arr3[i] = Arr1[i] + Arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int ArraySize = ReadPosNum("Enter Number Of Elements");
    int Arr1[100];
    int Arr2[100];
    int Arr3[100];
    FillArray(ArraySize, Arr1);
    FillArray(ArraySize, Arr2);
    SumArr1Arr2intoArr3(ArraySize, Arr1, Arr2, Arr3);
    cout << "-----------------\n";
    cout << "Array 1 Elements: \n";
    PrintArray(ArraySize, Arr1);
    cout << "\n\n";
    cout << "Array 2 Elements: \n";
    PrintArray(ArraySize, Arr2);
    cout << "\n\n";
    cout << "(Arr1) + (Arr2) Elements: \n";
    PrintArray(ArraySize, Arr3);
    // PrintPrimeNumber(ArraySize, Arr);

    return 0;
}

#include <iostream>
// #include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
// Then PRINT the Average of The ARRAY ELEMENTS
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
void CopyOfArray1(int ArraySize,int Arr2[100] ,int Arr[])
{
    
    for (int i = 0; i < ArraySize; i++)
    {
          Arr2[i]=Arr[i];
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int Arr2[100];
    int ArraySize = ReadPosNum("Enter Number Of Elements");
    FillArray(ArraySize, Arr);
    CopyOfArray1(ArraySize, Arr2,Arr);
    cout << "-----------------\n";
    cout << "Array 1 Elements: ";
    PrintArray(ArraySize, Arr);
    cout<<"\n";
    cout << "Array 2 Elements: ";
    PrintArray(ArraySize, Arr2);

    return 0;
}

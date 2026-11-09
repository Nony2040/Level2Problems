#include <iostream>
// #include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
// Then PRINT A Reversed Copy without using reversed loop
using namespace std;

int ReadPosNum(string Message)
{
    int Num;
    do
    {
        cout << Message << " ....\n";
        cin >> Num;
    } while (Num <= 0);

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
void Swap(int &A, int &B)
{
    int Temp = 0;
    Temp = A;
    A = B;
    B = Temp;
}
void CopyArray(int ArraySize, int Arr[],int Arr2[]){
    for(int i=0;i<ArraySize;i++){
        Arr2[i]=Arr[i];
    }
}
void ReverseArray(int ArraySize,int Arr2[]){
int tail=ArraySize-1;
int head=0;
for(int i=0;i<ArraySize/2;i++){
    Swap(Arr2[head],Arr2[tail]);
    tail--;
    head++;
}
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int Arr2[100];
    int ArraySize = ReadPosNum("Enter Number Of Elements");
    FillArray(ArraySize, Arr);
    cout << "-----------------\n";
    cout << "Array Before Reverse : \n";
    PrintArray(ArraySize, Arr);
    cout << "\n\n";
    cout << "Array After Reverse : \n";

    CopyArray(ArraySize,Arr,Arr2);
    ReverseArray( ArraySize, Arr2);
    PrintArray(ArraySize, Arr2);

    return 0;
}

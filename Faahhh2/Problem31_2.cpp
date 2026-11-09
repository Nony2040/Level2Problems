#include <iostream>
// Fill Array with orderd Nums from 1 to N
//  Print array2 after shuffle array 1
// طريقة من حل الدوك
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
void FillArrayInOrder(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        Arr[i] = i + 1;
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
void ShuffleArrayElements(int ArraySize, int Arr1[])
{
    for (int i = 0; i <= ArraySize; i++)
    {
        Swap(Arr1[RandomNumber(0, ArraySize - 1)], Arr1[RandomNumber(0, ArraySize - 1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int ArraySize = ReadPosNum("Enter Number Of Elements");
    int Arr1[100];

    FillArrayInOrder(ArraySize, Arr1);
    cout << "-----------------\n";
    cout << "Array 1 Elements: \n";
    PrintArray(ArraySize, Arr1);
    cout << "\n\n";
    cout << "Array 1 After Shuffle: \n";
    ShuffleArrayElements(ArraySize, Arr1);
    PrintArray(ArraySize, Arr1);

    return 0;
}

// اول طريقة حل لي

// #include <iostream>
// // #include <cstdlib>
// //Fill Array with orderd Nums from 1 to N
// // Print array2 after shuffle array 1
// using namespace std;

// int ReadPosNum(string Message)
// {
//     int Num;
//     do
//     {
//         cout << Message << " ....\n";
//         cin >> Num;
//     } while (Num < 0);

//     return Num;
// }
// int RandomNumber(int From, int To)
// {
//     int RandomNum = rand() % (To - From + 1) + From;
//     return RandomNum;
// }
// void FillArrayInOrder(int ArraySize, int Arr[])
// {
//     for (int i = 0; i < ArraySize; i++)
//     {
//         Arr[i] = i+1;
//     }
// }
// void PrintArray(int ArraySize, int Arr[])
// {
//     for (int i = 0; i < ArraySize; i++)
//     {
//         cout << Arr[i] << " ";
//     }
// }

// void ShuffleArrayElements(int ArraySize, int Arr[],int Arr2[]){

//     for(int i=0;i<ArraySize;i++){
// if (i==0){
//  Arr2[i]=RandomNumber(1,ArraySize);
// }
// else{
//    int j=i-1;
//    int X =RandomNumber(1,ArraySize);

//    while(j>=0){

//    if (X!=Arr2[j])
//     j--;

//    else {
//    j=i-1;
//    X =RandomNumber(1,ArraySize);
//    }
//    }
//    Arr2[i]=X;
// }

//     }

// }

// int main()
// {
//     srand((unsigned)time(NULL));

//     int ArraySize = ReadPosNum("Enter Number Of Elements");
//     int Arr1[100];
//     int Arr2[100];

//     FillArrayInOrder(ArraySize, Arr1);
//     cout << "-----------------\n";
//     cout << "Array 1 Elements: ";
//     PrintArray(ArraySize, Arr1);
//     cout << "\n\n";
//     cout << "Array 1 After Shuffle: \n";
//     ShuffleArrayElements(ArraySize,Arr1,Arr2);
//     PrintArray(ArraySize, Arr2);

//     return 0;
// }

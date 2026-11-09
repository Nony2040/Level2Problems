#include <iostream>
// #include <cstdlib>
// Fill array with max size 100
// with random nums from 1 to 100
// enter a number to search and return the index and the order in the array
using namespace std;
enum ensearch
{
    NotFound,
    Found
};
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
int SearchNumberX(int Arr[], int Search, int ArraySize)
{

    for (int i = 0; i < ArraySize; i++)
    {
        if (Arr[i] == Search)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int Search, Position, Order;
    int ArraySize = ReadPosNum("Enter Number Of Elements");
    FillArray(ArraySize, Arr);
    cout << "-----------------\n";
    cout << "Array Elements : \n";
    PrintArray(ArraySize, Arr);
    cout << "\n\n";
    Search = ReadPosNum("Enter Number You Looking For...");
    cout << "The Number is : " << Search << "\n";
    Position = SearchNumberX(Arr, Search, ArraySize);

    if (Position == -1)
        cout << "Number Is Not Found :(\n";

    else
    {
        cout << "Number Position: " << Position << endl;
        cout << "Number Order: " << Position + 1 << endl;
    }

    return 0;
}
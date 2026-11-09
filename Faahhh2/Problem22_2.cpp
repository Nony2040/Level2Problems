#include <iostream>
using namespace std;
// need N Elements and store them in an array
// and show a message says what elemnt do u want to check?
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
void ReadArray(int X, int arr[100])
{

    for (int i = 0; i < X; i++)
    {
        cout << "Enter Element[" << i + 1 << "] \n";
        cin >> arr[i];
        cout << "\n";
    }
}
int ElementCounter(int arrsize, int element, int arr[100])
{
    int Counter = 0;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] == element)
            Counter++;
    }
    return Counter;
}
void printAllArrElemn(int arrsize, int element, int arr[100])
{
    cout << "Original Array \n";
    for (int i = 0; i < arrsize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
}
void printarr()
{
    int arr[100];
    int ArrSize = ReadPosNum("Enter How Many Elements in The Array");
    ReadArray(ArrSize, arr);
    int element = ReadPosNum("Enter The Number You Wanna Check");
    int counter = ElementCounter(ArrSize, element, arr);
    cout << "Num " << element << " is repeated " << counter << " Times \n";

    printAllArrElemn(ArrSize, element, arr);
}
int main()
{
    printarr();
    return 0;
}
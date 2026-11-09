#include<iostream>
#include<cstdlib>
// Fill Array With Random Nums
// Print the EVEN Nums in Array2 
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
bool IfEven(int X){
if (X%2==0)
    return true;

else 
return false;

}
void AddElement(int Arr2[],int & ArraySize2,int X){
Arr2[ArraySize2]=X;
ArraySize2++;
}
void FillUnknownSizeArrayWithOddNums(int Arr[],int Arr2[],int ArraySize,int &ArraySize2){
for(int i=0;i<ArraySize;i++){
    if(IfEven (Arr[i]))
        AddElement(Arr2,ArraySize2,Arr[i]);
}

}

void PrintArray(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        cout << Arr[i] << " ";
    }
}


int main(){
srand((unsigned)time(NULL));
int Arr[100], Arr2[100];
int ArraySize2=0;
int ArraySize=ReadPosNum("Enter Array Size (0-100)");

FillArray(ArraySize,Arr);
cout<<"Array \n";
PrintArray(ArraySize,Arr);

cout<<"\n--------------------------------------\n";
FillUnknownSizeArrayWithOddNums(Arr,Arr2,ArraySize,ArraySize2);

cout<<"Array 2 Size ="<<ArraySize2<<endl;
cout<<"Odd Nums\n";
PrintArray(ArraySize2,Arr2);
}
#include<iostream>
//Resolve Problem 28_2
// Copy array Elements
// the second array size is unknown 

//Copy PRIME Numbers To another Array  
enum enPrimeOrNot{NotPrime,Prime};
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
void AddArrayElement(int &ArrSize,int Arr[],int Number){
        Arr[ArrSize]=Number;
        ArrSize++;
}
enPrimeOrNot Check_If_I_Prime_Num(int NumI)
{
    int HalfNum = NumI / 2;

    for (int i = 2; i <= HalfNum; i++)
    {

        if (NumI % i == 0)
            return enPrimeOrNot::NotPrime;
    }
    return enPrimeOrNot::Prime;
}
void CopyArray1Using_AddArrayElement(int ArrSize,int &ArrSize2,int Arr1[],int Arr2[]){
    int Number;
    for(int i=0;i<ArrSize;i++){
         Number=Arr1[i];
       if(Check_If_I_Prime_Num(Number)==enPrimeOrNot::Prime)
       AddArrayElement(ArrSize2,Arr2,Number);
    } 
}
int main(){
srand((unsigned)time(NULL));
    int Arr1[100];
    int Arr2[100];

    int ArrSize1=0,ArrSize2=0;
     ArrSize1 = ReadPosNum("Enter Number Of Elements");


    cout<<"Array 1 Size = "<<ArrSize1<<endl<<'\n';
    cout<<"Array 1 \n";
    FillArray(ArrSize1, Arr1);
    PrintArray(ArrSize1,Arr1);

    cout<<"\n -----------------------\n";
    CopyArray1Using_AddArrayElement(ArrSize1,ArrSize2,Arr1,Arr2);

    cout<<"Array 2 Size = "<<ArrSize2<<endl<<'\n';
    cout<<"Array 2 \n";
    PrintArray(ArrSize2,Arr2);

    return 0;
}
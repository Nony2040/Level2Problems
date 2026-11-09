#include<iostream>
//Resolve Problem 28_2
// Copy array Elements
// the second array size is unknown 

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

void CopyArray1Using_AddArrayElement(int ArrSize,int &ArrSize2,int Arr1[],int Arr2[]){
    for(int i=0;i<ArrSize;i++){
        int Number=Arr1[i];
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
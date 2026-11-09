#include<iostream>
//Resolve Problem 28_2
// Copy array Elements
// the second array size is unknown 

//Copy DISTINCT NUMBERS to an Array
using namespace std;
void FillArray1 (int Arr[]){
Arr[0]=10;
Arr[1]=50;
Arr[2]=100;
Arr[3]=70;
Arr[4]=20;
Arr[5]=30;
Arr[6]=30;
Arr[7]=100;
Arr[8]=70;
Arr[9]=20;
// Hard-coded values (Fixed values)
}
void AddArrayElement(int &ArrSize,int Arr[],int Number){
     
       Arr[ArrSize]=Number;
         ArrSize++;
        
}
bool CheckNumArr1ExistInArr2(int Arr2[],int ArraySize2,int X)
{
    bool Exist=true;

for(int i=0;i<ArraySize2;i++)
{
         if (Arr2[i] == X){
            Exist=false;
        }
}
return Exist ;    
}
void FillDistinctNUMSArray2(int ArraySize,int &ArraySize2, int Arr[],int Arr2[]){

for(int i=0;i<=9;i++)
{
         if (CheckNumArr1ExistInArr2(Arr2,ArraySize2,Arr[i]))
        {
            AddArrayElement(ArraySize2, Arr2,Arr[i]);
       
        }
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
// srand((unsigned)time(NULL));
    int Arr1[100];
    int Arr2[100];

    int ArrSize1=10,ArrSize2=0;

    FillArray1(Arr1);

    cout<<"Array 1 \n";
    PrintArray(ArrSize1,Arr1);

FillDistinctNUMSArray2(ArrSize1,ArrSize2,Arr1,Arr2);

    cout<<"\n -----------------------\n";
    cout<<"Array 2 Size = "<<ArrSize2<<endl;
    cout<<"Array 2 :  ";
    PrintArray(ArrSize2,Arr2);

    return 0;
}
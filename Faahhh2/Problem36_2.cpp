#include <iostream>
using namespace std;
// SIMI DYNAMIC
// read numbers to save them in an array Max Size is 100
// return array length and the elements
// ثاني مرة كود 
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
int ReadNumZeroOrOne(string Message){
    int Num;
    do
    {
        cout << Message << " ....\n";
        cin >> Num;
    } while (Num < 0|| Num > 1);

    return Num;

 }
void FillArrayWithElement(int &ArrSize,int Arr[]){
    
        int  Number = ReadPosNum("Please Enter A Number");
        Arr[ArrSize]=Number;
        ArrSize++;
}


void AddMoreFromUser(int &ArrSize,int Arr[]){
bool AddMore=1;
    do{
FillArrayWithElement(ArrSize,Arr);
AddMore = ReadNumZeroOrOne("Do You Want To Add More Number?? [0]No , [1]Yes");
}while(AddMore&&ArrSize<100);

}

void PrintArr(int ArrSize,int Arr[]){
for(int i=0;i<ArrSize;i++){
cout<<Arr[i]<<" ";

}
cout<<"\n";

}
int main(){
int Arr[100],ArrSize=0;
AddMoreFromUser(ArrSize,Arr);
cout<<"Array Size = "<<ArrSize<<endl;
PrintArr(ArrSize,Arr);


    return 0;
}



//First
/*
#include <iostream>
using namespace std;
// SIMI DYNAMIC
// read numbers to save them in an array Max Size is 100
// return array length and the elements

enum enYesOrNo
{
    No,
    Yes
};
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
int ReadNumZeroOrOne(string Message)
{
    int Num;

    do
    {
        cout << Message << " ....\n";
        cin >> Num;
    } while (Num < 0 || Num > 1);

    return Num;
}


int AddNumToArray(int Arr[], int &ArraySize)
{
    ArraySize = 0;
    int AddMore, Number;
    do
    {
        Number = ReadPosNum("Please Enter A Number");
        Arr[ArraySize] = Number;
        AddMore = ReadNumZeroOrOne("Do You Want To Add More Number?? [0]No , [1]Yes");
        ArraySize++;
    } while (AddMore == enYesOrNo::Yes && ArraySize<100);
return ArraySize;
}
void PrintArray(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        cout << Arr[i] << " ";
    }

}
void PrintAll()
{
int Arr[100];
int ArraySize= AddNumToArray(Arr,ArraySize);
cout<<"Array Elements : \n";
PrintArray(ArraySize,Arr);
cout<<'\n';
cout<<"Array Length "<<ArraySize;

}

int main()
{
PrintAll();
    return 0;
}
*/
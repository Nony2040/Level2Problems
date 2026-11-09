#include <iostream>
//IS Palindrom Array
using namespace std;
enum EnIsPal{NotPalindrom,Palindrom};
void Hard_Coded_Values (int Arr[]){
Arr[0]=10;
Arr[1]=20;
Arr[2]=30;
Arr[3]=40;
Arr[4]=50;
Arr[5]=40;
Arr[6]=30;
Arr[7]=20;
Arr[8]=10;
// Hard-coded values (Fixed values)
}

EnIsPal IsPalindrom(int Arr[],int ArraySize1){
int j=ArraySize1-1;
    for(int i=0;i<ArraySize1/2;i++){//0 1 2 3 
 if (Arr[i]!=Arr[j])
            return EnIsPal::NotPalindrom;
        j--;
}
return EnIsPal::Palindrom;
}
void PrintArray(int ArraySize, int Arr[])
{
    for (int i = 0; i < ArraySize; i++)
    {
        cout << Arr[i] << " ";
    }
}
void PrintRESULT(int ArraySize, int Arr[]){
cout<<"Array Is ";
if(IsPalindrom(Arr,ArraySize)==EnIsPal::Palindrom)
cout<<"Palindrom \n";
else
cout<<"NOT Palindrom\n";


}
int main(){
int ArraySize1=9,Arr[100];
Hard_Coded_Values(Arr);
cout<<"Array : \n";
PrintArray(ArraySize1,Arr);
cout<<"\n______________________\n";
PrintRESULT(ArraySize1,Arr);

    return 0;

}
#include<iostream>
#include<string>
//Print bigest frequency of digits
using namespace std;


int ReadPosetiveN(string message)
{
    int Number, counter = 0;
    do
    {
        if (counter == 0)
            cout << message << '\n';

        else
            cout << "Enter A Positive Number.\n";

        cin >> Number;
        counter++;
    } while (Number <= 0);

    return Number;
}

void PrintReversedNum(){
   
    int N=ReadPosetiveN("Enter Positive Number to Reverse it\n");
    int arr[9];
    int Max=0,Number_ofMaxFreq=0;
//متخزن في الاراي التكرار
 while(N!=0) {
    int x=N%10;
    N/=10;
    arr[N]++;
    if(arr[N]>=Max){
        Max=arr[N];
        Number_ofMaxFreq=N;
    }
   }

cout<<"Number "<<Number_ofMaxFreq<<endl;
cout<<"Frequency "<<Max;
}


int main(){
PrintReversedNum();
    return 0;
}
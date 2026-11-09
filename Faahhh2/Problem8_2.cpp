#include<iostream>
#include<string>
//Read a digit and a number then print digit frequency in thet number
//
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

void CountDigitFrequency(int N,int Digit){
    int counter=0;
 while(N!=0) {
    int x=N%10;
    N/=10;

    if(x==Digit)
    counter++;
}
cout<<"Digit "<<Digit<<" Frequency is "<<counter<<" Time(s)\n";
}

void PrintTheResult(){
int N=ReadPosetiveN("Enter The Main Number\n");
int Digit=ReadPosetiveN("Enter The Digit To Check\n");
CountDigitFrequency(N,Digit);

}
int main(){
PrintTheResult();
    return 0;
}
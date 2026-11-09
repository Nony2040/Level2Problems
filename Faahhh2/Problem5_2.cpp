#include <iostream>
#include <string>
// Read Num and Print it in a Reversed Order
using namespace std;
// idea from Dr.Abu-Hadhood

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

void PrintReversedNum()
{

    int N = ReadPosetiveN("Enter Positive Number to Reverse it\n");
    while (N != 0)
    {
        int x = N % 10;
        N /= 10;
        cout << x << endl;
    }
}
int main()
{
    PrintReversedNum();
    return 0;
}
/* MY IDEA
string ReadNumInString(string message){
string Number;
    cout<<message;
    cin>>Number;
return Number;
}

void ReverseNum(){
string Num=ReadNumInString("Enter a Number to Print it in a Reversed Order\n");
int x=Num.length();
for(int i=x-1;i>=0;i--){
cout<<Num[i];

}
}

int main(){
ReverseNum();
    return 0;
} */
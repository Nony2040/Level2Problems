#include <iostream>
#include <string>
// Read Num and Print The Sum of Its Digits
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

int PrintReversedNum()
{

    int N = ReadPosetiveN("Enter Positive Number to Reverse it\n");
    int sum = 0;
    while (N != 0)
    {
        int x = N % 10;
        N /= 10;
        sum += x;
    }
    return sum;
}
int main()
{
    int Result = PrintReversedNum();
    cout << "the sum of the digits = " << Result << endl;
    return 0;
}
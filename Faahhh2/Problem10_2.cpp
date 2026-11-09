#include <iostream>
#include <string>
// Read a number then print digits in order
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

int ReverseDigitsOfNumInOrder(int N)
{
    int container = 0;
    int Num2 = 0;
    while (N != 0)
    {
        container = N % 10;
        N /= 10;
        Num2 = Num2 * 10 + container;
    }
    return Num2;
}

void PrintDigitsOfReversedNum(int N)
{
    int XNumber = ReverseDigitsOfNumInOrder(N);
    int x = 0;
    while (XNumber != 0)
    {
        x = XNumber % 10;
        XNumber /= 10;
        cout << x << endl;
    }
}

int main()
{

    int x = ReadPosetiveN("enter Positive Num");

    PrintDigitsOfReversedNum(x);

    return 0;
}
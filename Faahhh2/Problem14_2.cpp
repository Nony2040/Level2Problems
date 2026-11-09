#include <iostream>
/*
enter number and  Print inverted Letter Pattern--> 4
DDDD
CCC
BB
A
// num+64  i>=65
*/
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
void PrintInvertedLetterPattern(int Number)
{
    for (int i = Number; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << char(i + 64);
        }
        cout << "\n";
    }
}
int main()
{
    PrintInvertedLetterPattern(ReadPosetiveN("Please Enter +ve Number"));

    return 0;
}
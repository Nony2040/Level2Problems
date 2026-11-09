#include <iostream>
/*
enter number and  Print Letter Pattern--> 4
A
BB
CCC
DDDD
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
void PrintLetterPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
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
    PrintLetterPattern(ReadPosetiveN("Please Enter +ve Number"));

    return 0;
}
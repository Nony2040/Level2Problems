#include <iostream>
/*
enter number and  Print inverted Pattern--> 4
4444
333
22
1
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
void PrintInvertedPattern(int Number)
{
    while (Number > 0)
    {
        for (int i = Number; i > 0; i--)
        {
            cout << Number;
        }
        cout << "\n";
        Number--;
    }
}
int main()
{
    PrintInvertedPattern(ReadPosetiveN("Please Enter +ve Number"));

    return 0;
}
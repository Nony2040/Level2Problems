#include <iostream>
/*
enter number and  Print Pattern--> 4
1
22
333
4444
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
void PrintPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << "\n";
     }
}
int main()
{
    PrintPattern(ReadPosetiveN("Please Enter +ve Number"));

    return 0;
}
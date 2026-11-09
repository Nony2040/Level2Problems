#include <iostream>
#include <string>
// Read  a number then print digit frequency in thet number
// all the digits
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

int DigitCounter(int Digit, int N)
{
    int counter = 0;
    while (N != 0)
    {
        int x = N % 10;
        N /= 10;
        if (x == Digit)
        {
            counter++;
        }
    }
    return counter;
}

void CountFreq(int N)
{

    for (int i = 0; i <= 9; i++)
    {
        int num = DigitCounter(i, N);
        if (num > 0)
        {
            cout << "Digit " << i << " Frequency is " << num << " Time(s)\n";
        }
    }
}

int main()
{
    int N = ReadPosetiveN("Enter Positive Number to Reverse it\n");
    CountFreq(N);
    return 0;
}

/*فكرة حلي الاولى
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
void CountDigitFrequency(int N, int arr[])
{
    int counter = 0, x = 0;
    while (N != 0)
    {
        x = N % 10;
        N /= 10;

        arr[x]++;
    }
}
void PrintFreq(int arr[])
{
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] != 0)
        {
            cout << "Digit " << i << " Frequency is " << arr[i] << " Time(s)\n";
        }
    }
}

void PrintTheResult()
{
    int arr[10] = {}; // قيمة صفر لكل الاراي عشان نبعد عن الارقام المتخزنة بالميموري
    int N = ReadPosetiveN("Enter The Main Number\n");
    CountDigitFrequency(N, arr);
    PrintFreq(arr);
}

int main()
{
    PrintTheResult();
    return 0;
} */
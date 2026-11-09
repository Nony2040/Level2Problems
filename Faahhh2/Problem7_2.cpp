#include <iostream>
#include <string>
// Read Num and Print it in a Reversed Order(OUTPUT AS NUMBER)
using namespace std;
int ReadPositiveNum(string message)
{
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}

int ReverseNum()
{
    int Num = ReadPositiveNum("Enter a Number to Print it in a Reversed Order\n");
    int container = 0;
    int Num2 = 0;
    while (Num != 0)
    {
        container = Num % 10;
        Num /= 10;
        Num2 = Num2 * 10 + container;
    }
    return Num2;
}

int main()
{
    cout << ReverseNum();
    return 0;
}
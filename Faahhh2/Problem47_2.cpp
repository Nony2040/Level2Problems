#include <iostream>
#include <cmath>
// Read A Number And Print the Round Result
// Print it with BUILT IN Func
// Print It With Your Func
using namespace std;

float ReadNum(string Message)
{
    float Num;
    cout << Message << " ....\n";
    cin >> Num;
    return Num;
}
int MYRound(float X)
{
    int IntPart = X;
    float FractionPart = (X - IntPart) * 10;

    if (X >= 0)
    {
        if (FractionPart >= 5)
            return IntPart + 1;
        else
            return IntPart;
    }
    else
    {
        if (FractionPart <= -5)
            return IntPart - 1;
        else
            return IntPart;
    }
}

int main()
{

    float Number = ReadNum("Enter A Number");
    cout << "C++ Function= " << round(Number) << endl;
    cout << "MyFunction= " << MYRound(Number) << endl;

    return 0;
}

#include <iostream>
#include <cmath>
// Read A Number And Print the FLOOR Result
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
int MyFloor(float X)
{
    int IntPart = X;
    float FractionPart = (X - IntPart) * 10;

    if (X >= 0)
            return IntPart;
    
    else
    {
        if(FractionPart==0)
     return IntPart;
     else
     return IntPart-1;
    }
}

int main()
{

    float Number = ReadNum("Enter A Number");
    cout << "C++ Function= " << floor(Number) << endl;
    cout << "MyFunction= " << MyFloor(Number) << endl;

    return 0;
}

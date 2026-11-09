#include <iostream>
#include <cmath>
// Read A Number And Print the Square Root Result
// Print it with BUILT IN Func
// Print It With Your Func
using namespace std;

float ReadPosNum(string Message)
{
    int Num;
    do
    {
        cout << Message << " ....\n";
        cin >> Num;
    } while (Num <= 0);

    return Num;
}
float MySqrt(float X)
{  
   return pow(X,0.5);
}

int main()
{

    float Number = ReadPosNum("Enter A Positive Number");
    cout << "C++ Function= " << sqrt(Number) << endl;
    cout << "MyFunction= " << MySqrt(Number) << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cstdlib> // library
// Select 3 Random Numbers From 1 to 10

using namespace std;

int RandomNumFromTo(int From, int To)
{

     int RandomNumber = rand() % (To - From + 1) + From;
     return RandomNumber;
}
int main()
{
     srand((unsigned)time(NULL)); // يتحط مرة وحدة في المين عشان هو اللي بيخلي الارقام تتنوع وتتغير

     cout << endl
          << RandomNumFromTo(1, 80) << endl;
     cout << endl
          << RandomNumFromTo(1, 80) << endl;
     cout << endl
          << RandomNumFromTo(1, 80) << endl;

     return 0;
}
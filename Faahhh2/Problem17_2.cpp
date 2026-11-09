#include <iostream>
#include <string>

// Guess 3_letter Password (All Capital)

using namespace std;

string ReadPass3Letters(string message)
{
    string Pass;
    cout << message << "\n";
    cin >> Pass;
    return Pass;
}

string PrintPassFromAAAtoZZZ(string XXX)
{
    string word = "";
    int Trial = 0;
    for (char i = 65; i <= 90; i++)
    {
        for (char j = 65; j <= 90; j++)
        {
            for (char k = 65; k <= 90; k++)
            {
                Trial++;
                word += i;
                word += j;
                word += k;
                if (word == XXX)
                    return "Password " + XXX + "\nFound After " + to_string(Trial) + " Trial";
                word = "";
            }
        }
    }
}
int main()
{
    string Pass = ReadPass3Letters("Enter Pass (3 Capital Letters)");
    cout << PrintPassFromAAAtoZZZ(Pass);

    return 0;
}
#include <iostream>
using namespace std;
// print Multiplication Table
// نقسم الجدول لاجزاء

void MultiplicationTable(){
    cout << "\n";
    cout << "\t\t\t Multiplication Table From 1 to 10\n";
}
void TableHeadLine(){
    cout << "___________________________________________________________________________________\n";
}
void LeftNums(int x){
    if (x==10)
    cout  << x << " |\t";

    else
    cout << " " << x << " |\t";
}
int Multiplication(int A, int B){
    return A * B;
}
void TableHeader(){

    for (int i = 0; i <= 10; i++)
    {
        if (i != 0)

            cout << "\t" << i << " ";
    }
    cout << endl;
}
void ResultTable()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (j == 0)
            {
                LeftNums(i);
            }
            else
            {
                cout << Multiplication(i, j);
                cout << "\t";
            }
        }

        cout << endl;
    }

}

int main()
{
        MultiplicationTable();
        TableHeader();
        TableHeadLine();
        ResultTable();
    return 0;
}


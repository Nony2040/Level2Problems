#include<iostream>
// Read A Number And Print the Absolute Result 
// Print it with BUILT IN Func
// Print It With Your Func
using namespace std;


int ReadNum(string Message)
{
    int Num;
        cout << Message << " ....\n";
        cin >> Num;
    return Num;
}
int MyAbs(int X){
if(X<0)
X*=-1;
return X;

}

int main(){

int Number=ReadNum("Enter A Number");
cout<<"abs() Function= "<<abs(Number)<<endl;
cout<<"MyAbs() Function= "<<MyAbs(Number)<<endl;

    return 0;
}

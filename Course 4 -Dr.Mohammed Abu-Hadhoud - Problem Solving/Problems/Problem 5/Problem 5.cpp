#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
enum enPassOrFail
{
    ePass = 1,
    eFail = 2
};
float ReadNumber()
{
    float num;
    cout << "Please Enter A Number : ";
    cin >> num;
    return num;
}
float HalfNumber(float Number)
{
    return (float) Number / 2;
}
void PrintHalfNumber(float Number)
{
    cout << fixed << setprecision(3);
    cout << "Half of " << to_string(Number) << " = " << HalfNumber(Number) ;
}
enPassOrFail CheckPassOrFail(float Number)
{
    if (HalfNumber(Number) > 60)
        return enPassOrFail::ePass;
    else
        return enPassOrFail::eFail;
}
void PrintTheResult(enPassOrFail PassOrFail)
{
    switch (PassOrFail)
    {
    case 1 :
        cout << "\nPass )_) " << endl;
        break;
    case 2: 
        cout << "\nFail (_( " << endl;
        break;
    default:
        cout << "There is something Wrong *_* " << endl;
    }
}
int main()
{
    float Number = ReadNumber();
    PrintTheResult(CheckPassOrFail(Number));
    cout << "\n\n";
    PrintHalfNumber(Number);
}
#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
    int num
    cout << "Please Enter A Number : ";
    cin >> num;
    return num;
}
float HalfNumber(int Number)
{
    return Number / 2;
}
void PrintHalfNumber(float Number)
{
    cout << "Half of " << to_string(Number) << " = " << HalfNumber(Number);
}
int main()
{
    PrintHalfNumber(ReadNumber());
    
}
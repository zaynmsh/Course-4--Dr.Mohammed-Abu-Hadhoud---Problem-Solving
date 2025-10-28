#include <iostream>
#include <string>
using namespace std;
struct stPersonInfo
{
    string First_Name;
    string Second_Name;
};
stPersonInfo ReadInfo()
{
    stPersonInfo sPersonInfo;
    cout << "Plese Enter Your First Name : ";
    cin >>  sPersonInfo.First_Name;
    cout << "Plese Enter Your Second Name : ";
    cin >> sPersonInfo.Second_Name;

    return sPersonInfo;
}
string GetFullName(stPersonInfo PersonInfo)
{

    string FullName = PersonInfo.First_Name + " " + PersonInfo.Second_Name; 
    return FullName;
}
void PrintFullName()
{
    cout << "Full Name Is : " << GetFullName(ReadInfo());
}
int main()
{
    PrintFullName();
    
}
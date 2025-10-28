#include <iostream>
#include <string>
using namespace std;
struct stPersonInfo
{
    string Name;
    int Age;
    bool HasDriverLicense;
};
stPersonInfo ReadInfo()
{
    stPersonInfo sPersonInfo;
    cout << "Plese Enter Your Name : ";
    getline(cin, sPersonInfo.Name);
    cout << "\nPlese Enter Your Age : ";
    cin >> sPersonInfo.Age;
    cout << "Do You have Driver License 0 or 1 : ";
    cin >> sPersonInfo.HasDriverLicense;
    return sPersonInfo;
}
bool IsAccepted(stPersonInfo PersonInfo)
{
    return (PersonInfo.Age > 18 && PersonInfo.HasDriverLicense);
}
void PrintResult()
{
    if (IsAccepted(ReadInfo()))
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}
int main()

{
    PrintResult();
    
}
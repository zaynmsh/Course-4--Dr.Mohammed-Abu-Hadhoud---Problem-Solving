

#include <iostream>
#include <string>
using namespace std;
enum enEvenOrOdd
{
    enEven = 1 , enOdd = 2 
};
string ReadName()
{
    string Name;
    cout << "Please Enter Your Name : ";
    getline(cin, Name);
    return Name;
}
int ReadAge()
{
    int Age;
    cout << "Please Enter Your Age : ";
    cin >> Age;
    return Age;
   
}
void PrintName(string Name)
{
    cout <<"Your Name is :  " << Name << endl;
}
void PrintAge(int Age)
{
    cout << "Your Age is : " << Age << endl;
}
enEvenOrOdd CheckIfAgeEvenOrOdd(int Age)
{
    enEvenOrOdd eEvenOrOdd;
    if (Age % 2 == 0)
    {
        eEvenOrOdd = enEven;
    }
    else
    {
        eEvenOrOdd = enOdd;
    }
    return eEvenOrOdd;
}
void PrintIfAgeEvenOrOdd(enEvenOrOdd eEvenOrOdd)
{
    switch (eEvenOrOdd)
    {
    case 1 :
        cout << "\n\nThe Age Is Even ^_^ ";
        break;
    case 2 : 
        cout << "\n\nThe Age Is Odd ^_^ ";
        break;
    default:
        cout << "\n\nW R O N G -_- ";
    }
}
int main()
{
    
    PrintName(ReadName());
    int Age = ReadAge();
    PrintAge(Age);
    PrintIfAgeEvenOrOdd(CheckIfAgeEvenOrOdd(Age));
    
}

#include <iostream>  
#include <string>    
#include <math.h>
using namespace std; 
enum enPrimeNotPrime {
    ePrime = 1,
    eNotPrime = 2
};
int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}
enPrimeNotPrime CheckIfNumberIsPrime(int Number)
{
    //The number is impossible to divide by more than half of it >_< .. 
    for (int i = 2; i < round(Number/2) ; i++)
    {
        if (Number % i == 0)
        {
            return eNotPrime;
        }
    }
    return ePrime;
}
void PrintResult()
{
    if (CheckIfNumberIsPrime(ReadNumber("PLease Enter a Number : ")) == eNotPrime)
        cout << " N O T   P R I M E" << endl;
    else
        cout << " P R I M E " << endl;
}
int main()
{
    PrintResult();
   
}
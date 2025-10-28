#include <iostream>  
#include <string>    
using namespace std; 
float ReadNumber(string Message)
{
    float Number = 0; 
    cout << Message << endl;
    cin >> Number;
    return Number; 
}
float SumNumbersUntil99()
{
    int Number = 0 ;
    int Sum = 0;
    int Counter = 0;
    do
    {
        Sum += Number;
        Counter++;
       Number = ReadNumber("\nPlease Enter a Number " + to_string(Counter));
    } while (Number!=99);

    return Sum;
}
int main()
{
   cout <<  SumNumbersUntil99();

}
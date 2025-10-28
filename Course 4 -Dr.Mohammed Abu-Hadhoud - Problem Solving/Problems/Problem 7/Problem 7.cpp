#include <iostream>
#include <string>
using namespace std;
enum enPassOrFail
{
	ePass = 1,
	eFail = 2
};
void ReadNumber(int &num1, int &num2, int &num3)
{
	cout << "Please Enter Number 1  : "; 
	cin >> num1;
	cout << "\nPlease Enter Number 2  : ";
	cin >> num2;
	cout << "\nPlease Enter Number 3  : ";
	cin >> num3;
}
int SumOf3Numbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
void PrintSumOf3Numbers(int Total)
{
	cout << "\nSum Of Three Numbers : " << Total << endl;

}
int CalculateTheAverage(int num1, int num2, int num3)
{
	return SumOf3Numbers(num1, num2, num3) / 3;
}
void PrintTheAverage(int Number)
{
	cout << "\nTheAverage " << Number << endl;

}
enPassOrFail CheckPassOrFail(int num1, int num2, int num3)
{
	if ( CalculateTheAverage(num1 , num2 ,num3) > 40)
		return enPassOrFail::ePass;
	else
		return enPassOrFail::eFail;
}
int main()
{
	int num1, num2, num3;
	ReadNumber(num1, num2, num3);
	if (CheckPassOrFail(num1, num2, num3) == eFail)
	{
		cout << "Fail" << endl;
	}
	else
	{
		cout << "Pass" << endl;
	}
}

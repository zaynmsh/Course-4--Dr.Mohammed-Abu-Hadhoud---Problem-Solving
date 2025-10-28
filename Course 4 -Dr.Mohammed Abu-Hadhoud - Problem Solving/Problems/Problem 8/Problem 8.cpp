#include <iostream>
#include <string>
using namespace std;
void ReadNumber(int &num1, int &num2, int &num3)
{
	cout << "Please Enter Number 1  : "; 
	cin >> num1;
	cout << "\nPlease Enter Number 2  : ";
	cin >> num2;
	cout << "\nPlease Enter Number 3  : ";
	cin >> num3;
}
int MaxOfThreeNumbers(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}
void PrintResult(int Max)
{
	cout << "\nMax Of Three Numbers : " << Max << endl;

}

int main()
{
	int num1, num2, num3;
	ReadNumber(num1, num2, num3);
	PrintResult(MaxOfThreeNumbers(num1, num2, num3));
}

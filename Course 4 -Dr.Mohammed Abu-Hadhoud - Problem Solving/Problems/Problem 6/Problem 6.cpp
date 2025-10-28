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
int SumOf3Numbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
void PrintSumOf3Numbers(int Total)
{
	cout << "\nSum Of Three Numbers : " << Total << endl;
}
void PrintTheAverage(int num1, int num2, int num3)
{
	cout << "\nTheAverage " << SumOf3Numbers(num1, num2, num3)/3 << endl;

}
int main()
{
	int num1, num2, num3;
	ReadNumber(num1, num2, num3);
	PrintSumOf3Numbers(SumOf3Numbers(num1, num2, num3));
	PrintTheAverage(num1, num2, num3);
}
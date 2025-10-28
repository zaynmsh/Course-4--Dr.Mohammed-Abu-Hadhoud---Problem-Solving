#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &num1, int& num2)
{
	cout << "Please Enter Number 1  : ";
	cin >> num1;
	cout << "\nPlease Enter Number 2  : ";
	cin >> num2;
}
void SwapNumbers(int &num1, int &num2)
{
	int temp ;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void PrintResul(int num1, int num2)
{
	cout << "\nNumbers After Swapping : " << num1 << "  " << num2 << endl;
}

int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	SwapNumbers(num1, num2);
	PrintResul(num1, num2);
	
}

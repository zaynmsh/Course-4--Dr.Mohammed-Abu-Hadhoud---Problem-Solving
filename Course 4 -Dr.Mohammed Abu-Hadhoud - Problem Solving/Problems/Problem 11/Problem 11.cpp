#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age; 
	cout << "Enter Your Age : ";
	cin >> Age;
	cout << "\n";
	return Age;
}
bool ValidateNumberInRange(int Number, int From, int  To)
{
	return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
	int Age = ReadAge();
	while (!ValidateNumberInRange(Age, From, To))
	{
		cout << "Please Enter Valid Age )( ... " << endl;
		cin >> Age;
	}
	return Age;
}
void PrintResult(int Age)
{
	cout << "Your Age is : " << Age << endl;
}
int main()
{
	PrintResult(ReadUntilAgeBetween(10, 20));

}

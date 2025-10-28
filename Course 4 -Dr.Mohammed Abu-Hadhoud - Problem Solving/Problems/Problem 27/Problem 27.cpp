#include <iostream> 
#include <string>    
using namespace std; 
int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;

}
bool CheckPINCode()
{
	int Number = ReadNumber("PLease Enter PIN Code ");
	int counter = 3;
	while (Number != 1234)
	{
		if (counter == 0)
		{
			return false;
		}
		system("color 4F");
		cout << "Wrong PIN" << endl;
		Number = ReadNumber("PLease Enter PIN Code (You Have "+to_string(counter)+" More Tries)");
		counter--;
	}
	return true;
}
int main()
{
	if (CheckPINCode())
	{
		system("color 2F");
		cout << "\nYour account balance is " << 7500 << '\n';
	}
	else
	{
		system("color 4F");  
		cout << "\nYour card is blocked. Call the bank for help.\n";
	}
}
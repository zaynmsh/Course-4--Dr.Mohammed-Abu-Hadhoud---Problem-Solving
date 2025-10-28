#include <iostream>
#include <string>
using namespace std;
/*int ReadPositiveNumber(string Message)
{
	int N; 
	do
	{
		cout << Message << endl;
		cin >> N;
	} while (N<0);
	
	return N;
}
*/
void PrintPowerOf(int Number, int M)
{
	int counter = 1;
	for (int i = 0; i < M; i++)
	{
		counter *= Number;
	}
	cout << "\n" << counter << endl;
}
int main()
{
	PrintPowerOf(4,4);
}

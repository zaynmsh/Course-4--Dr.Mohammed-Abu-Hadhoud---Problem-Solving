#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int N; 
	do
	{
		cout << Message << endl;
		cin >> N;
	} while (N<0);
	
	return N;
}
void PrintRangeFrom1ToN(int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << i+1 << endl;
	}
	/*
	int j = 1; 
	while (j != N)
	{
		cout << j << endl;
		j++;
	}
	
	int k = 0;
	do
	{
		k++;
		cout << k << endl;
	} while (k!=N);
	*/
}
void PrintRangeFromNTo1(int N)
{
	cout << endl;
	for (int i = N; i >= 1; i--)
	{
		cout << i << endl;
	}
}
void PrintSumOfOddRangeFrom1ToN(int N)
{
	cout << endl;
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 != 0)
			cout << i << endl;
		else
			continue;
	}
}
void PrintSumOfEvenRangeFrom1ToN(int N)
{
	cout << endl;
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
		else
			continue;
	}
}
int GetFactorial(int Number)
{
	int counter = 1  ;
	for (int i = Number ; i >= 1; i--)
	{
		counter = counter * i;
	}
	return counter;
}
void PrintFactorial(int Number)
{
	cout << endl;
    cout <<  GetFactorial(Number);
}
int main()
{
	int Num = ReadPositiveNumber("Please Enter a Number : ");
	PrintRangeFrom1ToN(Num);
	PrintRangeFromNTo1(Num);
	PrintSumOfOddRangeFrom1ToN(Num);
	PrintSumOfEvenRangeFrom1ToN(Num);
	PrintFactorial(5);
}

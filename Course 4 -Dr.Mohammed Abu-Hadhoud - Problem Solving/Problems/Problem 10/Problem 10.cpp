#include <iostream>
#include <string>
using namespace std;
void ReadTriangleDate(float & A , float & B , float & C)
{
	cout << "Please Enter Triangle Side A  : ";
	cin >> A;
	cout << "\nPlease Enter Triangle Base B  : ";
	cin >> B;
	cout << "\nPlease Enter Triangle Side C : ";
	cin >> C;
}
float CircleAreaByATriangle(float& A, float& B, float& C)
{
	const float PI = 3.14159265359;
	float P = (A + B + C / 2);
	float R = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Result = PI * pow(R, 2);
	return Result;
}
void PrintResul(float Num)
{
	cout << "\n Result: "<< Num << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleDate(A, B, C);
	PrintResul(CircleAreaByATriangle(A, B, C));
}

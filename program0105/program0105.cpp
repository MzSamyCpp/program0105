#include<iostream>
#include<string>

using namespace std;

enum Operator { Plus = '+', Minus = '-', Times = '*', Divide = '/' };

int ReadNum(string Message)
{
	int Num;
	cout << Message << "\n";
	cin >> Num;
	cout << "\n";
	return Num;
}

Operator ReadCheckOperator(string Message)
{
	char OperatorInput = 'a';
	cout << Message << "\n";
	cin >> OperatorInput;
	cout << "\n";
	return (Operator)OperatorInput;
}

float Calculator(int Num1, int Num2, Operator Op)
{
	switch (Op)
	{
	case Operator::Plus:
		return Num1 + Num2;
		break;
	case Operator::Minus:
		return Num1 - Num2;
		break;
	case Operator::Times:
		return Num1 * Num2;
		break;
	case Operator::Divide:
		return Num1 / Num2;
		break;
	default:
		return Num1 + Num2;
		break;
	}		
}

int main()
{
	int Num1, Num2;
	Num1 = ReadNum("Please Enter First Num\n");
	Num2 = ReadNum("Please Enter Second Num\n");
	Operator Op;
	Op = ReadCheckOperator("Please Enter Operator\n");
	cout << Calculator(Num1, Num2, Op) << "\n";
	


	return 0;
}
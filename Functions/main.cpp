#include <iostream>
using namespace std;
int Sum(int a, int b);    // Прототип функции (Объявление функции - Function declaration)
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
long long int Factorial(int a);
double Power(double a, int b);

//#define CALC
//#define FACTORIAL
#define POWER

void main()
{
	setlocale(LC_ALL, "");
#ifdef CALC

	cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);    // Вызов или использование функции – Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
#endif // CALC

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << Factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a,b;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> b;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
#endif // POWER
}
    //Calc
	int Sum(int a, int b) //Реализация функции (Определение функции -Function definition) 
	{
		int c = a + b;
		return c;
	}
	int Diff(int a, int b)
	{
		return a - b;
	}
	int Prod(int a, int b)
	{
		return a * b;
	}
	double Quot(int a, int b)
	{
		return (double)a / b;
	}
	// Factorial
	long long int Factorial(int n)
	{
		long long int fact = 1;
		for (int i = 1; i <= n; i++)
		{
			fact *= i;
		}
		return fact;
	}
	// Power
	double Power(double a, int n)
	{
		double N = 1;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}
		for (int i = 0; i < n; i++)
		{
			N *= a;
		}
		return N;
	}
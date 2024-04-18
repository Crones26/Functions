﻿#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "----------------------------------------------------------\n"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void Print(const int arr[], const int n);
void Print(double arr[], const int n);
void Print(const char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Sum(const int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(const char arr[], const int n);

double Avg(const int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

int minValueIn(const int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(char arr[], const int n);

int maxValueIn(const int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(char arr[], const int n);

void shiftLeft(int arr[], const int n, int shift);
void shiftLeft(double arr[], const int n, int shift);
void shiftLeft(char arr[], const int n, int shift);

void shiftRight(int arr[], const int n, int shift);
void shiftRight(double arr[], const int n, int shift);
void shiftRight(char arr[], const int n, int shift);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int originalArr[n];
	int shiftLeftValue, shiftRightValue;
	cout << "Исходный массив:        ";
	FillRand(arr, n);
	copy(arr, arr + n, originalArr);//Копия основного массива нужна для сдвига 
	Print(arr, n);                  //оригинального массива, а не отсортированного.
	cout << "Отсортированный массив: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее значение элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
	//// Сдвиг массива влево на указанное количество позиций
	//copy(originalArr, originalArr + n, arr); //Копия основного масcива
	//cout << "Введите количество позиций для сдвига влево: ";
	//cin >> shiftLeftValue;
	//Print(arr, n);
	//shiftLeft(arr, n, shiftLeftValue);
	//// Сдвиг массива вправо на указанное количество позиций
	//copy(originalArr, originalArr + n, arr);//Копия основного массива
	//cout << "Введите количество позиций для сдвига вправо: ";
	//cin >> shiftRightValue;
	//Print(arr, n);
	//shiftRight(arr, n, shiftRightValue);
	cout << delimiter; 
	const int SIZE = 8;
	double brr[SIZE];
	cout << "Исходный массив:        ";
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Отсортированный массив: ";
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(brr, SIZE) << endl;
	cout << delimiter;
	const char CHAR_SIZE = 6;
	char crr[CHAR_SIZE];
	cout << "Исходный массив:        ";
	FillRand(crr, CHAR_SIZE);
	Print(crr, CHAR_SIZE);
	cout << "Отсортированный массив: ";
	Sort(crr, CHAR_SIZE);
	Print(crr, CHAR_SIZE);
	cout << "Сумма элементов массива: " << Sum(crr, CHAR_SIZE) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(crr, CHAR_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(crr, CHAR_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(crr, CHAR_SIZE) << endl;
}	

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 100);
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << +arr[i] << tab; // ( + ) неявное преобразование char в int перед выводом на экран
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(const int arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Sum(double arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
	int Sum(const char arr[], const int n) 
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i]; //- '0'; // Преобразование char в int для получения числового значения
		}
		return sum;
}
double Avg(const int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n) 
{
    return (double)Sum(arr, n) / n; 
}
int minValueIn(const int arr[], const int n)
{
    int minVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i] ;
        }
    }
    return minVal;
}
double minValueIn(double arr[], const int n)
{
    int minVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}
int minValueIn(char arr[], const int n)
{
    int minVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
			minVal = arr[i]; //-'0'; // Преобразование char в int для получения числового значения
        }
    }
    return minVal;
}
int maxValueIn(const int arr[], const int n)
{
    int maxVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
double maxValueIn(double arr[], const int n)
{
    int maxVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int maxValueIn(char arr[], const int n)
{
	int maxVal = arr[0]; //-'0'; // Преобразование char в int для получения числового значения
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
			maxVal = arr[i]; //-'0'; // Преобразование char в int для получения числового значения
        }
    }
    return maxVal;	
}
void shiftLeft(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftLeft(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftLeft(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftRight(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftRight(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftRight(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
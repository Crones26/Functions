#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);
void shiftLeft(int arr[], const int n, int shift);
void shiftRight(int arr[], const int n, int shift);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int originalArr[n];
	cout << "�������� ������:        ";
	FillRand(arr, n);
	copy(arr, arr + n, originalArr);//����� ��������� ������� ����� ��� ������ 
	Print(arr, n);					//������������� �������, � �� ����������������.
	cout << "��������������� ������: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ����� " << Sum(arr, n) << endl;
	cout << "������� ��������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(arr, n) << endl;
	// ����� ����� �� ��������� ���������� �������
int shiftLeftValue, shiftRightValue;
	copy(originalArr, originalArr + n, arr); //����� ��������� ���c���
	cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftLeftValue;
	Print(arr, n);
	shiftLeft(arr, n, shiftLeftValue);
	// ����� ������ �� ��������� ���������� �������
	copy(originalArr, originalArr + n, arr);//����� ��������� �������
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftRightValue;
	Print(arr, n);
	shiftRight(arr, n, shiftRightValue);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
int Sum(const int arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Avg(const int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}
int maxValueIn(const int arr[], const int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
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
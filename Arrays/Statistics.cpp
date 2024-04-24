#include "Statistics.h"

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
	double sum = 0;
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
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0.0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	{
	}
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
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
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS, COLS)) / (ROWS * COLS);
}
int minValueIn(const int arr[], const int n)
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
double minValueIn(double arr[], const int n)
{
	double minVal = arr[0];
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
	char minVal = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minVal)
		{
			minVal = arr[i];
		}
	}
	return minVal;
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, int COLS)
{
	int minVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minVal)
			{
				minVal = arr[i][j];
			}
		}
	}
	return minVal;
}
double minValueIn(double arr[][COLS], const int ROWS, const int COLS)
{
	double minVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minVal)
			{
				minVal = arr[i][j];
			}
		}
	}
	return minVal;
}
int minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char minVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minVal)
			{
				minVal = arr[i][j];
			}
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
	double maxVal = arr[0];
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
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
}


double maxValueIn(double arr[][COLS], const int ROWS, const int COLS)
{
	double maxVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
}
int maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char maxVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
}
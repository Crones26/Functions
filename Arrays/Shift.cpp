#include "Constants.h"
#include "stdafx.h"
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
		double buffer = arr[0];
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
		char buffer = arr[0];
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
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int i = 0; i < shift; i++)
		{
			int buffer = arr[row][0];
			for (int col = 1; col < COLS; col++)
			{
				arr[row][col - 1] = arr[row][col];
			}
			arr[row][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int i = 0; i < shift; i++)
		{
			double buffer = arr[row][0];
			for (int col = 1; col < COLS; col++)
			{
				arr[row][col - 1] = arr[row][col];
			}
			arr[row][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int i = 0; i < shift; i++)
		{
			int buffer = arr[row][0];
			for (int col = 1; col < COLS; col++)
			{
				arr[row][col - 1] = arr[row][col];
			}
			arr[row][COLS - 1] = buffer;
		}
	}
}
void shiftRight(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
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
		int buffer = arr[n - 1];
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
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int j = 0; j < shift; j++)
		{
			int buffer = arr[row][COLS - 1];
			for (int col = COLS - 2; col >= 0; col--)
			{
				arr[row][col + 1] = arr[row][col];
			}
			arr[row][0] = buffer;
		}
	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int j = 0; j < shift; j++)
		{
			double buffer = arr[row][COLS - 1];
			for (int col = COLS - 2; col >= 0; col--)
			{
				arr[row][col + 1] = arr[row][col];
			}
			arr[row][0] = buffer;
		}
	}
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int j = 0; j < shift; j++)
		{
			int buffer = arr[row][COLS - 1];
			for (int col = COLS - 2; col >= 0; col--)
			{
				arr[row][col + 1] = arr[row][col];
			}
			arr[row][0] = buffer;
		}
	}
}
#include "stdafx.h"
#include "Constants.h"


template<typename T>void shiftLeft(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
	}
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int i = 0; i < shift; i++)
		{
			T buffer = arr[row][0];
			for (int col = 1; col < COLS; col++)
			{
				arr[row][col - 1] = arr[row][col];
			}
			arr[row][COLS - 1] = buffer;
		}
	}
}
template<typename T>void shiftRight(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
	}
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int j = 0; j < shift; j++)
		{
			T buffer = arr[row][COLS - 1];
			for (int col = COLS - 2; col >= 0; col--)
			{
				arr[row][col + 1] = arr[row][col];
			}
			arr[row][0] = buffer;
		}
	}
}
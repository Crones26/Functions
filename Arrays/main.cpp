#include "stdafx.h"
#include "Constants.h"

#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shift.h"


#define ONE_DIMENSIONAL
#define TWO_DIMENSIONAL

void main()
{
	setlocale(LC_ALL, "");

#ifdef ONE_DIMENSIONAL
	const int n = 5;
	int arr[n];
	int originalArr[n];
	int shiftLeftValue, shiftRightValue;
	cout << "Исходный массив:        ";
	FillRand(arr, n);
	Print(arr, n);
	cout << "Отсортированный массив: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифмитическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftLeftValue;
	Print(arr, n);
	shiftLeft(arr, n, shiftLeftValue);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftRightValue;
	Print(arr, n);
	shiftRight(arr, n, shiftRightValue);*/
	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	cout << "Исходный массив:        ";
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Отсортированный массив: ";
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифмитическое: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr, D_SIZE) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftLeftValue;
	Print(d_arr, D_SIZE);
	shiftLeft(d_arr, D_SIZE, shiftLeftValue);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftRightValue;
	Print(d_arr, D_SIZE);
	shiftRight(d_arr, D_SIZE, shiftRightValue);*/
	cout << delimiter << endl;

	const int C_SIZE = 8;
	char c_arr[C_SIZE];
	cout << "Исходный массив:        ";
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Отсортированный массив: ";
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифмитическое: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(c_arr, C_SIZE) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftLeftValue;
	Print(c_arr, C_SIZE);
	shiftLeft(c_arr, C_SIZE, shiftLeftValue);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftRightValue;
	Print(c_arr, C_SIZE);
	shiftRight(c_arr, C_SIZE, shiftRightValue);*/
	cout << delimiter << endl;

#endif // ONE_DIMENSIONAL

#ifdef TWO_DIMENSIONAL
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	int shiftValue;
	cout << "Исходный массив: ";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftValue;
	shiftLeft(i_arr_2, ROWS, COLS, shiftValue);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftValue;
	shiftRight(i_arr_2, ROWS, COLS, shiftValue);
	Print(i_arr_2, ROWS, COLS);*/

	cout << delimiter << endl;
	cout << "Исходный массив: \n";
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: \n";
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftValue;
	shiftLeft(d_arr_2, ROWS, COLS, shiftValue);
	Print(d_arr_2, ROWS, COLS);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftValue;
	shiftRight(d_arr_2, ROWS, COLS, shiftValue);
	Print(d_arr_2, ROWS, COLS);*/

	cout << delimiter << endl;
	cout << "Исходный массив: \n";
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: \n";
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;

	/*cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftValue;
	shiftLeft(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftValue;
	shiftRight(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);*/

#endif // TWO_DIMENSIONAL

}

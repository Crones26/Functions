#include<iostream>
#include<FillRand.h>
#include<Print.h>
#include<Sort.h>
#include<Statistics.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	cout << "Исходный массив:        ";
	FillRand(arr, n);
	Print(arr, n);
	cout << "Отсортированный массив: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее значение элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
	cout << delimiter;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	cout << "Исходный массив:        ";
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Отсортированный массив: ";
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << delimiter;

	const char C_SIZE = 11;
	char c_arr[C_SIZE];
	cout << "Исходный массив:        ";
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Отсортированный массив: ";
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << delimiter << endl;

	cout << "Исходный массив: ";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: ";
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "Исходный массив: \n";
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: ";
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "Исходный массив: \n";
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: ";
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;

}
﻿#include "stdafx.h"
#include "Constants.h"

#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"


void main()
{
	setlocale(LC_ALL, "");
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	int shiftLeftValue, shiftRightValue;
	int shiftValue;
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	int originalArr[I_SIZE];
	cout << "Исходный массив:        ";
	FillRand(i_arr, I_SIZE);
	copy(i_arr, i_arr + I_SIZE, originalArr);//Копия основного массива нужна для сдвига 
	Print(i_arr, I_SIZE);                  //оригинального массива, а не отсортированного.
	cout << "Отсортированный массив: ";
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее значение элементов массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr, I_SIZE) << endl;
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
	cout << "Отсортированный массив: ";
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
	cout << "Отсортированный массив: ";
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
} 

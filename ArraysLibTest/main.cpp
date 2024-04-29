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
	cout << "�������� ������:        ";
	FillRand(arr, n);
	Print(arr, n);
	cout << "��������������� ������: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(arr, n) << endl;
	cout << delimiter;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	cout << "�������� ������:        ";
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "��������������� ������: ";
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� ��������� �������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ �������� ��������� �������: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << delimiter;

	const char C_SIZE = 11;
	char c_arr[C_SIZE];
	cout << "�������� ������:        ";
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "��������������� ������: ";
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
	cout << "����������� �������� ��������� �������: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "������������ �������� ��������� �������: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << delimiter << endl;

	cout << "�������� ������: ";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "��������������� ������: ";
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "�������� ������: \n";
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "��������������� ������: ";
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "�������� ������: \n";
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "��������������� ������: ";
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;

}
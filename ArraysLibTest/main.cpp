#include <iostream>

#include <FillRand.h>
#include <Print.h>
#include <Print.cpp>
#include <Sort.h>
#include <Sort.cpp>
#include <Statistics.h>
#include <Statistics.cpp>
#include <Shift.h>
#include <Shift.cpp>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

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
	cout << "�������� ������:        ";
	FillRand(arr, n);
	Print(arr, n);
	cout << "��������������� ������: ";
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-��������������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(arr, n) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftLeftValue;
	Print(arr, n);
	shiftLeft(arr, n, shiftLeftValue);
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftRightValue;
	Print(arr, n);
	shiftRight(arr, n, shiftRightValue);*/
	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	cout << "�������� ������:        ";
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "��������������� ������: ";
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-��������������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� ��������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ ��������: " << maxValueIn(d_arr, D_SIZE) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftLeftValue;
	Print(d_arr, D_SIZE);
	shiftLeft(d_arr, D_SIZE, shiftLeftValue);
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftRightValue;
	Print(d_arr, D_SIZE);
	shiftRight(d_arr, D_SIZE, shiftRightValue);*/
	cout << delimiter << endl;

	const int C_SIZE = 8;
	char c_arr[C_SIZE];
	cout << "�������� ������:        ";
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "��������������� ������: ";
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-��������������: " << Avg(c_arr, C_SIZE) << endl;
	cout << "����������� ��������: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "������������ ��������: " << maxValueIn(c_arr, C_SIZE) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftLeftValue;
	Print(c_arr, C_SIZE);
	shiftLeft(c_arr, C_SIZE, shiftLeftValue);
	cout << "������� ���������� ������� ��� ������ ������: ";
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
	cout << "�������� ������: ";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "��������������� ������: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftValue;
	shiftLeft(i_arr_2, ROWS, COLS, shiftValue);
	Print(i_arr_2, ROWS, COLS);
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftValue;
	shiftRight(i_arr_2, ROWS, COLS, shiftValue);
	Print(i_arr_2, ROWS, COLS);*/

	cout << delimiter << endl;
	cout << "�������� ������: \n";
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "��������������� ������: \n";
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftValue;
	shiftLeft(d_arr_2, ROWS, COLS, shiftValue);
	Print(d_arr_2, ROWS, COLS);
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftValue;
	shiftRight(d_arr_2, ROWS, COLS, shiftValue);
	Print(d_arr_2, ROWS, COLS);*/

	cout << delimiter << endl;
	cout << "�������� ������: \n";
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "��������������� ������: \n";
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;

	/*cout << "������� ���������� ������� ��� ������ �����: ";
	cin >> shiftValue;
	shiftLeft(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);
	cout << "������� ���������� ������� ��� ������ ������: ";
	cin >> shiftValue;
	shiftRight(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);*/

#endif // TWO_DIMENSIONAL

}

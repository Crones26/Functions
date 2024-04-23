#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n----------------------------------------------------------\n"
const int ROWS = 4;
const int COLS = 6;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void main()
{
	setlocale(LC_ALL, "");
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	int shiftLeftValue, shiftRightValue;
	int shiftValue;
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

	cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftValue;
	shiftLeft(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftValue;
	shiftRight(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);

}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}cout << endl;
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = 'A' + rand() % 26;
		}
	}
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

void Print(double arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			cout << +arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			for (int k = 0; k < COLS - j - 1; k++) 
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					int buffer = arr[i][k];
					arr[i][k] = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				} 
			}
		}
	} cout << endl;
}
void Sort(double arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < COLS - j - 1; k++)
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					double buffer = arr[i][k];
					arr[i][k] = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				}
			}
		}
	} cout << endl;
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < COLS - j - 1; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}cout << endl;
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
			int buffer = arr[row][0];
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
			int buffer = arr[row][COLS - 1];
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
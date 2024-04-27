#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


#define ONE_DIMENSIONAL
#define TWO_DIMENSIONAL
#define tab "\t"
#define delimiter "\n---------------------------------------------------\n"
const int ROWS = 4;
const int COLS = 6;


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[], const int n, int shift);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template<typename T>void shiftRight(T arr[], const int n, int shift);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);


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
	cout << "Среднее значение: " << Avg(arr, n) << endl;
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

	cout << "Введите количество позиций для сдвига влево: ";
	cin >> shiftValue;
	shiftLeft(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);
	cout << "Введите количество позиций для сдвига вправо: ";
	cin >> shiftValue;
	shiftRight(c_arr_2, ROWS, COLS, shiftValue);
	Print(c_arr_2, ROWS, COLS);
#endif // TWO_DIMENSIONAL

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
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
	}cout << endl;
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			arr[i][j] = rand(); // arr[i][j] = 'A' + rand() % 26;
		}
	}
}
template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
template<typename T>T Sum (T arr[], const int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T>T minValueIn(T arr[], const int n)
{
    T minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minVal = arr[0][0];
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
template<typename T>T maxValueIn(T arr[], const int n)
{
    T maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxVal = arr[0][0];
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
		cout << endl;
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
		cout << endl;
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
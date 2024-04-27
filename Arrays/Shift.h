#pragma once
#include "Constants.h"

template<typename T>void shiftLeft(T arr[], const int n, int shift);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template<typename T>void shiftRight(T arr[], const int n, int shift);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);


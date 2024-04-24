#pragma once
#include "Constants.h"

void shiftLeft(int arr[], const int n, int shift);
void shiftLeft(double arr[], const int n, int shift);
void shiftLeft(char arr[], const int n, int shift);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void shiftRight(int arr[], const int n, int shift);
void shiftRight(double arr[], const int n, int shift);
void shiftRight(char arr[], const int n, int shift);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int shift);


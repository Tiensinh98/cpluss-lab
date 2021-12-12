
#include <iostream>

void printArray(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}


void print2DArray(double** arr, int r_size, int c_size)
{
	for (int i = 0; i < r_size; i++)
	{
		for (int j = 0; j < c_size; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
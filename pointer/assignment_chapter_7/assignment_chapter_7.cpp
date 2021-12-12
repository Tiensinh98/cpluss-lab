// assignment_chapter_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//typedef struct Grades {
//	int n;
//	int* arr;
//} Grades;
//
//
//int main()
//{
//	Grades *gradeArr;
//	gradeArr = new Grades[5];
//	for (int i = 0; i < 5; i++)
//	{
//		gradeArr[i].n = i + 2;
//		gradeArr[i].arr = new int[gradeArr[i].n];
//		for (int j=0; i< gradeArr[i].n; j++)
//		{
//			gradeArr[i].arr[j] = rand() / 100;
//		}
//	}
//	for (int i=0; i<5; i++)
//	{
//		delete[] gradeArr[i].arr;
//	}
//	delete gradeArr;
//}

// problem 1
// problem 2

//#include <iostream>
//
//
//int main()
//{
//	int n;
//	int* n_ptr;
//	long double d;
//	long double* d_ptr;
//	std::cout << sizeof(n) << std::endl;
//	std::cout << sizeof(n_ptr) << std::endl;
//	std::cout << sizeof(d) << std::endl;
//	std::cout << sizeof(d_ptr) << std::endl;
//}

// problem 3

//#include <stdio.h>
//#include <iostream>
//
//int main()
//{
//	int n = 100;
//	int* ptr1;
//	int* ptr2;
//	int* ptr3;
//	ptr1 = &n;
//	ptr2 = &n;
//	ptr3 = ptr1;
//	std::cout << "n = " << n << std::endl;
//	std::cout << "ptr1 = " << *ptr1 << std::endl;
//	printf("n pointer: %p\n", &n);
//	printf("n pointer: %p\n", &ptr1);
//	printf("n pointer: %p\n", &ptr2);
//	printf("n pointer: %p\n", &ptr3);
//}


// problem 4

//#include <iostream>
//#define MAX_LENGTH 10
//
//
//int main()
//{
//	int arr[MAX_LENGTH] = { 10, 20, 30, 40, 50 };
//	int* ptr;
//	ptr = arr;
//	std::cout << "pointer: " << ptr << std::endl;
//	ptr = &arr[0];
//	std::cout << "pointer: " << ptr << std::endl;
//	ptr = &arr[2];
//	std::cout << "Pointer: " << ptr << std::endl;
//	std::cout << "-------: " << ptr[0] << std::endl;
//	std::cout << "------: " << ptr[1] << std::endl;
//	std::cout << "------:: " << ptr[2] << std::endl;
//}


// problem 6

//#include <stdio.h>
//#include <iostream>
//#define N 10
//
//
//int main()
//{
//	double vector_1[N];
//	double vector_2[N];
//	double* ptr1 = &vector_1[0];
//	double* ptr2 = &vector_2[0];
//	double vector_1_length = 0.0;
//
//	for (double* ptr = ptr1; ptr < ptr1 + N; ptr++)
//	{
//		*ptr = rand();
//		vector_1_length += pow(*ptr, 2);
//	}
//	std::cout << "Length of vector 1 is : " << sqrt(vector_1_length) << std::endl;
//}


// extra homework

// problem 1

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//
//double randomFloat(double min, double max)
//{
//	double r = (double)rand() / (double)RAND_MAX;
//	return min + r * (max - min);
//}
//
//
//int main()
//{
//	srand(time(NULL));
//	int N;
//	std::cout << "Enter an integer: " << std::endl;
//	std::cin >> N;
//	//double* vector_1 = (double*)malloc(N * sizeof(double));
//	//double* vector_2 = (double*)malloc(N * sizeof(double));
//	double* vector_1 = new double[N];
//	double* vector_2 = new double[N];
//	for (double* v = vector_1; v < vector_1 + N; v++)
//	{
//		*v = randomFloat(-10.0, 10.0);
//	}
//	for (double* v = vector_2; v < vector_2 + N; v++)
//	{
//		//*v = rand() % 10 + 1.0;
//		*v = randomFloat(-10.0, 10.0);
//	}
//	double vector_1_length = 0;
//	double vector_2_length = 0;
//	double dot_product = 0.0;
//	for (double* v1 = vector_1, *v2 = vector_2; v1 < vector_1 + N && v2 < vector_2 + N; v1++, v2++)
//	{
//		vector_1_length += pow(*v1, 2);
//		vector_2_length += pow(*v2, 2);
//		dot_product += *v1 * *v2;
//	}
//	std::cout << "Length of vector 1: " << sqrt(vector_1_length) << std::endl;
//	std::cout << "Length of vector 2: " << sqrt(vector_2_length) << std::endl;
//	std::cout << "Dot product of the two vectors: " << dot_product << std::endl;
//	for (double* v = vector_1; v < vector_1 + N; v++)
//	{
//		std::cout << *v << "\t";
//	}
//	std::cout << "" << std::endl;
//
//	for (double* v = vector_2; v < vector_2 + N; v++)
//	{
//		std::cout << *v << "\t";
//	}
//	delete[] vector_1;
//	delete[] vector_2;
//	// if use malloc
//	//free(vector_1);
//	//free(vector_2);
//	system("pause");
//}


//problem 2

//#include <iostream>
//#include <iomanip>
//#define MAX_SIZE 100
//
//
//double randomfloat(double min, double max)
//{
//	double r = (double)rand() / (double)RAND_MAX;
//	return min + r * (max - min);
//}
//
//
//int main()
//{
//	int r;
//	int c;
//	std::cout << "enter number of row: \n";
//	std::cin >> r;
//	while (r < 1)
//	{
//		std::cout << "enter number of row: \n";
//		std::cin >> r;
//	}
//
//	std::cout << "enter number of column: \n";
//	std::cin >> c;
//	while (c < 1)
//	{
//		std::cout << "enter number of column: \n";
//		std::cin >> c;
//	}
//
//	double** arr = new double* [r];
//	for (int i = 0; i < r; ++i) {
//		arr[i] = new double[c];
//	}
//
//	for (int i = 0; i < r; i++)
//	{
//		if (!i)
//		{
//			std::cout << "[";
//		}
//		else std::cout << std::endl;
//
//		for (int j = 0; j < c; j++)
//		{
//			arr[i][j] = randomfloat(-40.0, 50.0);
//			std::cout << std::setprecision(6) << arr[i][j] << "   ";
//		}
//	}
//	std::cout << "]" << std::endl;
//
//	for (int i = 1; i < r; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			double* temp = new double;
//			*temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = *temp;
//		}
//	}
//	std::cout << std::endl;
//	for (int i = 0; i < r; i++)
//	{
//		if (!i)
//		{
//			std::cout << "[";
//		}
//		else std::cout << std::endl;
//
//		for (int j = 0; j < c; j++)
//		{
//			std::cout << std::setprecision(6) << arr[i][j] << "   ";
//		}
//	}
//
//	for (int i = 0; i < r; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	return 0;
//}


// Problem 6


//#include <iostream>
//#define N 3
//
//
//void print2DArray(double** arr, int r_size, int c_size)
//{
//	for (int i = 0; i < r_size; i++)
//	{
//		for (int j = 0; j < c_size; j++)
//		{
//			std::cout << arr[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//}
//
//
//void printArray(double* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << "\t";
//	}
//	std::cout << std::endl;
//}
//
//
//void delete2DArray(double** arr, int r_size, int c_size)
//{
//	for (double** ptr_i = arr; ptr_i < arr + c_size; ptr_i++)
//	{
//		for (double* ptr_j = *ptr_i; ptr_j < *ptr_i + r_size; ptr_j++)
//		{
//			delete ptr_j;
//		}
//	}
//	std::cout << "deleted!" << std::endl;
//}
//
//
//void deleteArray(double* arr, int size)
//{
//	for (double* ptr = arr; ptr < arr + size; ptr++)
//	{
//		delete ptr;
//	}
//	std::cout << "deleted!" << std::endl;
//}
//
//
//int main()
//{
//	// create 2 dimensional array
//	double** arr = new double* [N];
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = new double[N];
//	}
//	// create 1 dimensional vector
//
//	double* vec = new double[N];
//	double res[N];
//	std::cout << "Enter element of vector v:\n";
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << "V[" << i << "] = ";
//		std::cin >> vec[i];
//	}
//	// print out vector
//	printArray(vec, N);
//
//	std::cout << "Enter element of array: \n";
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			std::cout << "M[" << i << "][" << j << "] = ";
//			std::cin >> arr[i][j];
//		}
//	}
//	// print out matrix
//	print2DArray(arr, N, N);
//	/*for (int i = 0; i < N; i++)
//	{
//		res[i] = 0;
//		for (int j = 0; j < N; j++)
//		{
//			res[i] += arr[i][j] * vec[j];
//		}
//	}*/
//	int count = 0;
//	for (double** ptr_i = arr; ptr_i < arr + N; ptr_i++)
//	{
//		res[count] = 0;
//		for (double* ptr_j = *ptr_i, ptr_v = *vec; ptr_j < *ptr_i + N && ptr_v < *vec + N; ptr_j++, ptr_v++)
//		{
//			res[count] += *ptr_j * ptr_v;
//		}
//		count += 1;
//	}
//	printArray(res, N);
//	delete2DArray(arr, N, N);
//	deleteArray(vec, N);
//	return 0;
//}


// problem 7


#include <iostream>


#define AI 4
#define AJ 3
#define BI 3
#define BJ 2


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


void printArray(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}


double** inputArray(double** matrix, int r_size, int c_size)
{
	for (int i = 0; i < r_size; i++)
	{
		for (int j = 0; j < c_size; j++)
		{
			std::cout << "A[" << i << "][" << j << "] = ";
			std::cin >> matrix[i][j];
		}
	}
	return matrix;
}


int main()
{
	// create matrix A
	double** mat_a = new double* [AI];
	for (int i = 0; i < AI; i++)
	{
		mat_a[i] = new double[AJ];
	}
	// create matrix B
	double** mat_b = new double* [BI];
	for (int i = 0; i < BI; i++)
	{
		mat_b[i] = new double[BJ];
	}

	std::cout << "Enter element of matrix A: \n";
	mat_a = inputArray(mat_a, AI, AJ);
	print2DArray(mat_a, AI, AJ);

	std::cout << "Enter element of matrix B: \n";
	mat_b = inputArray(mat_b, BI, BJ);
	print2DArray(mat_b, BI, BJ);
	// create matrix result R
	double** mat_r = new double* [AI];
	for (int i = 0; i < AI; i++)
	{
		mat_r[i] = new double[BJ];
	}

	for (double** ptr_i = mat_a; ptr_i < mat_a + AI; ptr_i++)
	{
		for (double* ptr_j = *ptr_i; ptr_j < *ptr_i + AJ; ptr_j++)
		{

		}
	}
}
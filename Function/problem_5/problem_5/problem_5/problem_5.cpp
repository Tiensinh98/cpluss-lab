// problem_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int arr[], int size)
{
	if (size <= 0)
	{
		return 0;
	}
	std::cout << arr[size - 1] << "  ";
	return (sum(arr, size - 1) + arr[size - 1]);
}

int multiply(int arr[], int size)
{
	if (size <= 0)
	{
		return 1;
	}
	std::cout << arr[size - 1] << "  ";
	return (multiply(arr, size - 1) * arr[size - 1]);
}

int getMax(int arr[], int size, int maxInt)
{
	if (size <= 0)
	{
		return maxInt;
	}
	else
	{
		if (arr[size - 1] > maxInt)
		{
			maxInt = arr[size - 1];
		}
		return getMax(arr, size - 1, maxInt);
	}
}

long long decToBi(int num, int chunk = 0)
{
	if (!num)
	{
		return 0;
	}
	return (num % 2) * pow(10, chunk) + decToBi(int(num / 2), chunk + 1);
}

void getHailstone(int num, int count = 0)
{
	if (num % 2 == 1)
	{
		if (num == 1)
		{
			std::cout << num << std::endl;
			std::cout << "The length of sequence is: " << count + 1 << std::endl;
		}
		else
		{
			std::cout << num << "   ";
			getHailstone(3 * num + 1, count + 1);
		}
	}
	else
	{
		std::cout << num << "   ";
		getHailstone(num / 2, count + 1);
	}
}

int main()
{
	int arr[] = { 1, 2, 3 , 9 };
	int N = sizeof(arr) / sizeof(arr[0]);
	std::cout << sum(arr, N) << std::endl;
	std::cout << multiply(arr, N) << std::endl;
	std::cout << getMax(arr, N, -INFINITY) << std::endl;
	std::cout << decToBi(1998) << std::endl;
	getHailstone(13);
	return 0;
}

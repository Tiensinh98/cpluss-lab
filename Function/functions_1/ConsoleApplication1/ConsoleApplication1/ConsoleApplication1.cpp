// problem 4

//#include <iostream>
//#include <string>
//
//bool isPrime(unsigned int n)
//{
//	for (unsigned int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//bool isAmstrong(int n)
//{
//	char* num_char;
//	std::string num_str = std::to_string(n);
//	num_char = &num_str[0];
//	int sum = 0;
//	for (int i = 0; i < sizeof(num_char); i++)
//	{
//		char temp = num_char[i];
//		std::cout << temp << std::endl;
//		sum += pow(std::atoi(&temp), 3);
//	}
//	return sum == n;
//}
//
//bool isPerfectNumber(unsigned int n)
//{
//	int sum = 0;
//	for (unsigned int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum == n;
//}

//int main()
//{
	//unsigned int n;
	//int n1;
	//unsigned int n2;
	//std::cout << "Enter a number: " << std::endl;
	//std::cin >> n;
	//std::cin >> n1;
	//std::cin >> n2;
	//std::cout << n << " " << "is" << (isPrime(n) ? " " : " not ") << "prime number!" << std::endl;
	//std::cout << n1 << " " << "is" << (isAmstrong(n1) ? " " : " not ") << "amstrong number!" << std::endl;
	//std::cout << n2 << " " << "is" << (isPerfectNumber(n2) ? " " : " not ") << "perfect number!" << std::endl;
//	unsigned int n1 = 1;
//	unsigned int n2 = 0;
//
//	while (n1 > n2)
//	{
//		std::cout << "Enter number n1 = " << std::endl;
//		std::cin >> n1;
//		std::cout << "Enter number n2 = " << std::endl;
//		std::cin >> n2;
//	}
//	std::cout << "Prime numbers are: ";
//	for (unsigned int i = n1; i < n2; i++)
//	{
//		if (isPrime(i))
//		{
//			std::cout << i << "  ";
//		}
//	}
//	std::cout << "\nAmstrong numbers are: ";
//	for (unsigned int i = n1; i < n2; i++)
//	{
//		if (isAmstrong(i))
//		{
//			std::cout << i << "   ";
//		}
//	}
//
//	return 0;
//}


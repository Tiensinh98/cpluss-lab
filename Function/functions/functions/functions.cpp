#include <iostream>
#include <string>
#include <functions.h>


int get_num_digit(int x)
{
	return std::to_string(x).length();
}

void translate_thousand(double y)
{
	int f = int(y) / 100;
	if (f > 0)
	{
		num_to_text(f);
		std::cout << " hundred ";
	}
	else
	{
		std::cout << "";
	}
	int s = int(y) % 100;
	int t = s % 10;
	if (int(s / 10) <= 1)
	{
		num_to_text(s);
	}
	else
	{
		tens_to_text(int(s / 10));
		std::cout << " ";
		num_to_text(t);
	}
}

void translate_hundred(double y)
{

}


void num_to_text(int x)
{
	switch (x)
	{
	case 1: std::cout << "one"; break;
	case 2: std::cout << "two"; break;
	case 3: std::cout << "three"; break;
	case 4: std::cout << "four"; break;
	case 5: std::cout << "five"; break;
	case 6: std::cout << "six"; break;
	case 7: std::cout << "seven"; break;
	case 8: std::cout << "eight"; break;
	case 9: std::cout << "nine"; break;
	case 10: std::cout << "ten"; break;
	case 11: std::cout << "eleven"; break;
	case 12: std::cout << "twelve"; break;
	case 13: std::cout << "thirteen"; break;
	case 14: std::cout << "fourteen"; break;
	case 15: std::cout << "fifteen"; break;
	case 16: std::cout << "sixteen"; break;
	case 17: std::cout << "seventeen"; break;
	case 18: std::cout << "eighteen"; break;
	case 19: std::cout << "nineteen"; break;
	default: std::cout << "";
	}
}


void tens_to_text(int x)
{
	switch (x)
	{
	case 2: std::cout << "twenty"; break;
	case 3: std::cout << "thirty"; break;
	case 4: std::cout << "forty"; break;
	case 5: std::cout << "fifty"; break;
	case 6: std::cout << "sixty"; break;
	case 7: std::cout << "seventy"; break;
	case 8: std::cout << "eighty"; break;
	case 9: std::cout << "ninety"; break;
	default: std::cout << "";
	}
}

void power_to_text(int x)
{
	switch (x)
	{
	case 1: std::cout << "thousand "; break;
	case 2: std::cout << "million "; break;
	case 3: std::cout << "billion "; break;
	default: std::cout << "";
	}
}

std::string get_suit(int s)
{
	switch (s)
	{
	case 0: return "-H"; break;
	case 1: return "-D"; break;
	case 2: return "-B"; break;
	case 3: return "-T"; break;
	default: return "";
	}
}
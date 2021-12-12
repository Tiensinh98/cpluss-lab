//#include <iostream>
//#include <Header.h>


//void add(int a, int b)
//{
//	std::cout << "Addition is: " << a + b << std::endl;
//}
//
//void subtract(int a, int b)
//{
//	std::cout << "Subtraction is: " << a - b << std::endl;
//}
//
//void multiply(int a, int b)
//{
//	std::cout << "Multiplication is: " << a * b << std::endl;
//}
//
//void main()
//{
//	unsigned int ch, a = 4, b = 6;
//	void (*func_pointers[])(int, int) = { add, subtract, multiply };
//	std::cout << "Enter: " << std::endl;
//	std::cin >> ch;
//	if (ch > 2) return;
//	func_pointers[ch](a, b);
//}


// problem 1

//#include <iostream>
//#include <functions.h>
//
//int main()
//{
//	int a;
//	std::cout << "Enter an integer a = " << std::endl;
//	std::cin >> a;
//	if (a == 0)
//	{
//		std::cout << "zero" << std::endl;
//		return 0;
//	}
//	if (a < 0)
//	{
//		std::cout << "minus ";
//		a *= -1;
//	}
//	int num_digits = get_num_digit(a);
//	int chunk_count = (num_digits % 3 == 0) ? (num_digits / 3) : (num_digits / 3 + 1);
//	int t;
//	while (chunk_count > 0)
//	{
//		t = pow(10, (chunk_count - 1) * 3);
//		translate_thousand(double(a / t));
//		if (chunk_count > 1) std::cout << " ";
//		power_to_text(chunk_count - 1);
//		a = a % t;
//		chunk_count--;
//	}
//}

// problem 2

#include <iostream>
#include <iomanip>
#include <time.h>
#include <functions.h>


typedef struct Card_t
{
	int n_suit;
	std::string str_number;
} Card;


void init(Card* card)
{
	std::string c[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			Card* cd = &card[i * 13 + j];
			cd->n_suit = i;
			cd->str_number = c[j];
		}
	}
}

void showCard(Card* card)
{
	for (int i = 0; i < 52; i++)
	{
		std::cout << card[i].str_number << get_suit(card[i].n_suit) << "   ";
		if ((i + 1) % 13 == 0)
		{
			std::cout << "\n";
		}
	}
	std::cout << std::endl;
}

void shuffle(int n, Card& card_source, Card& card_dest, Card& card_aux)
{
	if (n > 0)
	{
		shuffle(n - 1, card_source, card_aux, card_dest);
		shuffle(n - 1, card_aux, card_dest, card_source);
	}
	return;
}

double randomFloat(double min, double max)
{
	double r = (double)rand() / (double)RAND_MAX;
	return min + r * (max - min);
}

int randomInt(unsigned int min, unsigned int max)
{
	double r = (double)rand() / (double)RAND_MAX;
	return int(min + r * (max - min));
}

int main()
{
	Card card[52];
	srand(time(NULL));
	init(card);
	std::cout << "Initial state: " << std::endl;
	showCard(card);
	Card aux;
	for (int i = 0; i < 52; i++)
	{
		int r1 = randomInt(0, 51);
		int r2 = randomInt(0, 51);
		shuffle(2, card[r1], card[r2], aux);
	}
	std::cout << "After shuffling: " << std::endl;
	showCard(card);
	return 0;
}
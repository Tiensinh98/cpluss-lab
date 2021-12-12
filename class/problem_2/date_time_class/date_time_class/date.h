#pragma once
#ifdef DATE
#define DATE
#endif // DATE

#include <iostream>
#include <string>
#include <istream>
#include <ostream>
#include <stdio.h>


class Date
{
protected:
	int year;
	int month;
	int day;

public:
	Date();

	Date(int d, int m, int y);

	~Date();

	virtual std::string toString();

	bool operator<(Date& ref);

	friend std::istream& operator>>(std::istream& is, Date& ref);

	friend std::ostream& operator<<(std::ostream& os, Date& ref);

};


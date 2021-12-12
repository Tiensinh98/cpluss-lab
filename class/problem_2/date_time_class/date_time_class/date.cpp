#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <date.h>

std::string Date::toString()
{
	return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}

bool Date::operator<(Date& ref)
{
	if (year != ref.year) return year < ref.year;
	else
	{
		if (month != ref.month) return month < ref.month;
		else
		{
			if (day != ref.day) return day < ref.day;
			else return false;
		}
	}
}

std::istream& operator>>(std::istream& is, Date& ref)
{
	scanf_s("%d/%d/%d", &ref.day, &ref.month, &ref.year);
	return is;
}

std::ostream& operator<<(std::ostream& os, Date& ref)
{
	std::string t = std::to_string(ref.day) + "/" + std::to_string(ref.month) + "/" + std::to_string(ref.year);
	os << t;
	return os;
}

Date::Date()
{

}

Date::Date(int d, int m, int y) : day(d), month(m), year(y)
{

}

Date::~Date()
{

}
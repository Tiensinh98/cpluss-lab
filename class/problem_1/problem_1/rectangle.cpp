#include <iostream>
#include <rectangle.h>


void Rectangle::display()
{
	std::cout << "Length: " << length << " - " << "Width: " << width << std::endl;
}

void Rectangle::getInfo(float l, float w)
{
	length = l;
	width = w;
}

void Rectangle::setWidth(float w)
{
	width = w;
}

void Rectangle::setLength(float l)
{
	length = l;
}

float Rectangle::getWidth()
{
	return width;
}

float Rectangle::getLength()
{
	return length;
}

float Rectangle::area()
{
	return length * width;
}

Rectangle::Rectangle()
{
	std::cout << "Standard initialize rectangle" << std::endl;
}

Rectangle::Rectangle(float l, float w) : length(20), width(10)
{

}

Rectangle::~Rectangle()
{
	std::cout << "Destroyed!" << std::endl;
}
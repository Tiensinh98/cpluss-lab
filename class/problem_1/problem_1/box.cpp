#include <iostream>
#include <box.h>
#include <rectangle.h>

Box::Box()
{
	std::cout << "Standard initialize Box!" << std::endl;
}

Box::Box(float l, float w, float d) : Rectangle(l, w), depth(d)
{

}

Box::~Box()
{
	std::cout << "Destroyed Box!" << std::endl;
}

void Box::setDepth(float d)
{
	depth = d;
}

float Box::getDepth()
{
	return depth;
}

void Box::getInfo(float l, float w, float d)
{
	length = l;
	width = w;
	depth = d;
}

void Box::display()
{
	std::cout << "Length: " << length << " - " << "Width: " << width << " - " << "Depth:" << depth << std::endl;
}

float Box::volume()
{
	return width * length * depth;
}
//// problem_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <string.h>
//
//struct Vector
//{
//private:
//	float x, y;
//public:
//	Vector()
//	{
//		x = y = 0;
//	}
//	Vector operator + (const Vector& a);
//	Vector operator / (const Vector& a);
//	bool operator == (const Vector& a);
//	void setX(float x);
//	void setY(float y);
//	friend void reset(Vector& v);
//};
//
//void reset(Vector& v)
//{
//	v.x = 0;
//}
//void Vector::setX(float x)
//{
//	this->x = x;
//}
//
//void Vector::setY(float y)
//{
//	this->y = y;
//}
//
//
//Vector Vector::operator+ (const Vector& a)
//{
//	Vector c;
//	c.x = this->x + a.x;
//	c.y = this->y + a.y;
//	return c;
//}
//
//Vector Vector::operator/ (const Vector& a)
//{
//	Vector c;
//	c.x = this->x / a.x;
//	c.y = this->y / a.y;
//	return c;
//}
//
//bool Vector::operator == (const Vector& a)
//{
//	if (this->x == a.x && this->y == a.y)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Vector vector;
//	Vector vector1;
//	vector.setX(2);
//	vector1.setX(2);
//	vector.setY(5);
//	vector1.setY(4);
//	std::cout << (vector == vector1 ? "True" : "False") << std::endl;
//	return 0;
//}



//#include <iostream>
//
//class Rectangle
//{
//private:
//
//	int value;
//
//public:
//
//	Rectangle() : value(2)
//	{
//		std::cout << "A() = " << value << std::endl;
//	}
//
//	Rectangle(Rectangle& obj) : value(obj.value)
//	{
//		std::cout << "A(obj) = " << value << std::endl;
//	}
//
//	Rectangle(int v) : value(v)
//	{
//		std::cout << "A(v) = " << value << std::endl;
//	}
//	~Rectangle()
//	{
//		std::cout << "~A() = " << value << std::endl;
//	}
//};
//
//int main()
//{
//	Rectangle rect1;
//	Rectangle* rect_ptr = new Rectangle(246);
//	{
//		Rectangle rect2(456);
//		Rectangle rect3(rect1);
//	}
//	delete rect_ptr;
//	Rectangle rect4(789);
//	Rectangle rect5 = 357;
//	return 0;
//}


//#include <iostream>
//
//class X
//{
//public:
//	int value;
//
//};
//
//class Y : public X
//{
//public:
//	int value;
//
//};
//
//class Z : public Y
//{
//public:
//	Z(int vx, int vy, int vz)
//	{
//		value = vz;
//		Y::value = vy;
//		X::value = vx;
//	}
//
//public:
//	int value;
//};
//
//
//int main()
//{
//	Z z(1, 2, 3);
//	std::cout << z.Y::value << std::endl;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//class X {
//public:
//	virtual void display() {
//		cout << "Type of \"this\" object is: Class X" << endl;
//	}
//};
//class Y : public X {
//public:
//	void display() {
//		cout << "Type of \"this\" object is: Class Y" << endl;
//	}
//};
//class Z : public Y {
//public:
//	void display() {
//		cout << "Type of \"this\" object is: Class Z" << endl;
//	}
//};
//int main() {
//	cout << "Call method via NON-POINTER variable - CASE I:" << endl;
//	X x;
//	Y y;
//	Z z;
//	x.display();
//	y.display();
//	z.display();
//	/////////////////
//	cout << " Call method via NON-POINTER variable - CASE II:" << endl;
//	X x1, x2, x3;
//	Y y2;
//	Z z3;
//	x2 = y2; x3 = z3; //ATTENTION
//	x1.display();
//	x2.display();
//	x3.display();
//	/////////////////
//	cout << " Call method via POINTER variable - CASE I:" << endl;
//	X* px = new X();
//	Y* py = new Y();
//	Z* pz = new Z();
//	px->display();
//	py->display();
//	pz->display();
//	delete px;
//	delete py;
//	delete pz;
//
//	/////////////////
//	cout << " Call method via POINTER variable - CASE II:" << endl;
//	X* px1 = new X();
//	X* px2 = new Y(); //ATTENTION
//	X* px3 = new Z(); //ATTENTION
//	px1->display();
//	px2->display();
//	px3->display();
//	delete px1;
//	delete px2;
//	delete px3;
//	return 0;
//};


#include <iostream>
#include <rectangle.h>
#include <box.h>

int main()
{
	Rectangle* rect = new Rectangle();
	Box* box = new Box();
	rect->getInfo(30, 40);
	box->getInfo(30, 40, 50);
	rect->display();
	box->display();
	std::cout << box->getDepth();
	return 0;
}
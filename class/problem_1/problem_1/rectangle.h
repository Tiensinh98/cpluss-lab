#pragma once
#ifdef RECT
#define RECT
#endif // RECT

class Rectangle
{

protected:

	float length;
	float width;

public:
	Rectangle();
	Rectangle(float l, float w);
	virtual ~Rectangle();
	virtual void display();
	void getInfo(float l, float w);
	virtual void setWidth(float w);
	virtual void setLength(float l);
	virtual float getWidth();
	virtual float getLength();
	virtual float area();
};

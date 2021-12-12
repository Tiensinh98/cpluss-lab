#pragma once
#ifdef BOX
#define BOX
#endif // BOX

#include <rectangle.h>


class Box : public Rectangle
{
protected:

	float depth;

public:
	Box();
	~Box();
	Box(float l, float w, float d);
	void display() override;
	void getInfo(float l, float w, float d);
	void setDepth(float d);
	float getDepth();
	float volume();
};
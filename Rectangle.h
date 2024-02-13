#pragma once
#include "ISape.h"
class Rectangle : public IShape
{
public:
	Rectangle();

	~Rectangle();

	void Size();

	void Draw();

private:
	//c
	int height = 5;
	//‰¡
	int width = 10;

	//“š‚¦
	int answer = 0;
};
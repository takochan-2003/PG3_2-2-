#pragma once
#include "ISape.h"
class Circle : public IShape
{
public:
	Circle();

	~Circle();

	void Size();

	void Draw();

private:
	//���a
	float radius = 5;
	//����
	float answer = 0;
};


#pragma once
#include <easy2d/easy2d.h>

using namespace easy2d;

class Plane : public Sprite
{
public:
	int dirction;//1 2 3 4 ��������
	float speed = 4;

	Plane();

	void move(int dirction);
};


#pragma once
#include <easy2d/easy2d.h>

using namespace easy2d;

#define M_PI 3.141592653f

class Bullet : public Sprite
{
public:
	float degree;
	float speed = 90;

	Bullet();

	void move();
};

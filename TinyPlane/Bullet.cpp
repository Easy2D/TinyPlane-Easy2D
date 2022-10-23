#include <corecrt_math.h>
#include "Bullet.h"

Bullet::Bullet() : Sprite("img/bullet.png")
{
	this->setAnchor(0.5f, 0.5f);
	this->setPos(200, 200);
	this->degree = Random::range(0.f, 3.f) * M_PI / 2;
}

void Bullet::move()
{
	float distance = speed * Time::getDeltaTime();
	this->setPosX(getPosX() + distance * cos(degree));
	this->setPosY(getPosY() + distance * sin(degree));
	if ((this->getPosY() >= Window::getHeight() - 6) || this->getPosY() < 6)
	{
		degree = -degree;
	}
	if ((this->getPosX() <= 6) || this->getPosX() >= Window::getWidth() - 6)
	{
		degree = M_PI - degree;
	}
}

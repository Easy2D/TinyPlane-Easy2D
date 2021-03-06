#include <corecrt_math.h>
#include "Bullet.h"

Bullet::Bullet() : Sprite(L"img/bullet.png")
{
	this->setAnchor(0.5f, 0.5f);
	this->setPos(200, 200);
	this->degree = Random::range(0.f, 3.f) * M_PI / 2;
}

void Bullet::move()
{
	this->setPosX(getPosX() + speed * cos(degree));
	this->setPosY(getPosY() + speed * sin(degree));
	if ((this->getPosY() >= Window::getHeight() - 6) || this->getPosY() < 6)
	{
		degree = -degree;
	}
	if ((this->getPosX() <= 6) || this->getPosX() >= Window::getWidth() - 6)
	{
		degree = M_PI - degree;
	}
}

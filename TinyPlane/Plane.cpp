#include "Plane.h"

Plane::Plane() : dirction(0)
{
	this->open("img/plane.png");
	this->setAnchor(0.5f, 0.5f);
	this->setPos(this->getWidth() / 2, this->getHeight() / 2);
}

void Plane::move(int dirction)
{
	float distance = speed * Time::getDeltaTime();
	switch (dirction)
	{
	case 1:
	{
		if (this->getPosY() > this->getWidth() / 2)
		{
			this->movePosY(-distance);
		}
		break;
	}
	case 2:
	{
		if (this->getPosX() < Window::getWidth() - this->getWidth() / 2)
		{
			this->movePosX(distance);
		}
		break;
	}
	case 3:
	{
		if (this->getPosY() < Window::getHeight() - this->getHeight() / 2)
		{
			this->movePosY(distance);
		}
		break;
	}
	case 4:
	{
		if (this->getPosX() > this->getWidth() / 2)
		{
			this->movePosX(-distance);
		}
		break;
	}
	}
}

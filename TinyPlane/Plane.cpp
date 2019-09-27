#include "Plane.h"

Plane::Plane() : Sprite(L"img/plane.png"), dirction(0)
{
	this->setAnchor(0.5f, 0.5f);
	this->setPos(this->getWidth() / 2, this->getHeight() / 2);
}

void Plane::move(int dirction)
{
	switch (dirction) {
	case 1: {
		if (this->getPosY() > this->getWidth() / 2) {
			this->movePosY(-speed);
		}
		break;
	}
	case 2: {
		if (this->getPosX() < Window::getWidth() - this->getWidth() / 2) {
			this->movePosX(speed);
		}
		break;
	}
	case 3: {
		if (this->getPosY() < Window::getHeight() - this->getHeight() / 2) {
			this->movePosY(speed);
		}
		break;
	}
	case 4: {
		if (this->getPosX() > this->getWidth() / 2) {
			this->movePosX(-speed);
		}
		break;
	}
	}
}

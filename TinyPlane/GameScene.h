#pragma once
#include "Plane.h"
#include "Bullet.h"

using namespace easy2d;

class GameScene : public Scene
{
public:
	Plane* plane;
	std::vector<Bullet*> bullets;

	GameScene();

	void onUpdate() override;
};

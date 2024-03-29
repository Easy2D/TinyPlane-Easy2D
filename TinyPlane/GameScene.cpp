#include "GameOverScene.h"
#include "GameScene.h"

GameScene::GameScene()
{
	auto background = gcnew Sprite("img/bg.jpg");
	this->addChild(background);

	plane = gcnew Plane();
	this->addChild(plane);

	for (unsigned int i = 0; i < 20; i++)
	{
		auto bullet = gcnew Bullet();
		bullets.push_back(bullet);
		this->addChild(bullet);
	}
}

void GameScene::onUpdate()
{
	if (Input::isDown(KeyCode::S) || Input::isDown(KeyCode::Down))
	{
		plane->move(3);
	}
	if (Input::isDown(KeyCode::W) || Input::isDown(KeyCode::Up))
	{
		plane->move(1);
	}
	if (Input::isDown(KeyCode::A) || Input::isDown(KeyCode::Left))
	{
		plane->move(4);
	}
	if (Input::isDown(KeyCode::D) || Input::isDown(KeyCode::Right))
	{
		plane->move(2);
	}

	for (size_t i = 0; i < bullets.size(); i++)
	{
		auto bullet = bullets[i];
		if (plane->containsPoint(Point(bullet->getPosX(), bullet->getPosY())))
		{
			SceneManager::enter(gcnew GameOverScene());
		}
		bullet->move();
	}
}

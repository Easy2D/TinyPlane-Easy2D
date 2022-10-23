#include "GameScene.h"
#include "GameOverScene.h"

GameOverScene::GameOverScene()
{
	// ±³¾°Í¼Æ¬
	auto background = gcnew Sprite("img/gameover.png");
	this->addChild(background);
}

void GameOverScene::onUpdate()
{
	if (Input::isDown(KeyCode::Enter))
	{
		SceneManager::enter(gcnew GameScene());
	}
}

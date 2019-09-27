#include "GameScene.h"
#include "GameOverScene.h"

GameOverScene::GameOverScene()
{
	// ±³¾°Í¼Æ¬
	auto background = gcnew Sprite(L"img/gameover.png");
	this->addChild(background);
}

void GameOverScene::onUpdate()
{
	if (Input::isDown(Key::Enter)) {
		SceneManager::enter(gcnew GameScene());
	}
}

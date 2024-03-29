//---------------------------------------------------------
// 程序名称：TinyPlane
// 作者：YangHong
// 编译环境：Visual Studio 2019 / Easy2D v2.1.12
// 项目类型：Win32 Application
//---------------------------------------------------------

#include <easy2d/easy2d.h>
#include "GameScene.h"

using namespace easy2d;

int WINAPI wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
	if (Game::init("TinyPlane", 400, 400))
	{
		auto gs = gcnew GameScene();
		SceneManager::enter(gs);

		Game::start();
	}
	Game::destroy();
	return 0;
}

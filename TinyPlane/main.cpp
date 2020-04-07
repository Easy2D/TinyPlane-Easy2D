//---------------------------------------------------------
// �������ƣ�TinyPlane
// ���ߣ�YangHong
// ���뻷����Visual Studio 2019 / Easy2D v2.0.4
// ��Ŀ���ͣ�Win32 Application
//---------------------------------------------------------

#include <easy2d/easy2d.h>
#include "GameScene.h"

using namespace easy2d;

int WINAPI wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
	if (Game::init(L"TinyPlane", 400, 400))
	{
		auto gs = gcnew GameScene();
		SceneManager::enter(gs);

		Game::start();
	}
	Game::destroy();
	return 0;
}

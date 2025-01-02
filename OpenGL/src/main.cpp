// GameEngine.cpp : 애플리케이션의 진입점을 정의합니다.
#include "GameEngine.h"

int main(int argc, char *argv[])
{
	GameEngine gameEngine;
	if (!gameEngine.Initialize("Game Engine", 800, 600))
	{
		return -1;
	}
	gameEngine.Run();
	gameEngine.Shutdown();

	return 0;
}
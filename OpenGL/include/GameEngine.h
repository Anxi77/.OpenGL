// GameEngine.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.

#pragma once
// TODO: 여기서 프로그램에 필요한 추가 헤더를 참조합니다.

#ifdef GAMEENGINE_H
#define GAMEENGINE_H
#include <GLFW/glfw3.h>
class GameEngine {
public:
	GameEngine();
	~GameEngine();
	bool Initialize(const char* title, int width, int height);
	void Run();
	void ShutDown();
private:
	SDL_Window* window;
	bool isRunning;
};

#endif	//GAMEENGINE_H
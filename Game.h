#pragma once
#include "GameComponent.h"
#include <ctime>
#include <Windows.h>

class Game
{
private:
	int componentCount;
	GameComponent** components;
	typedef void (*FP)();
	FP initialise;
	FP terminate;
	const int TICKS_1000MS = 1000;

public:
	void Add(GameComponent* gameComponent);
	Game();
	Game(int maxComponents);
	void Run();
	void SetInitialise(FP init);
	void SetTerminate(FP term);
};


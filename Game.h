#pragma once
#include "GameComponent.h"
#include <ctime>
#include <Windows.h>

class Game
{

	//Previous commits had almost all of the functionality done in the .h files because I found it easier to have
	//everything in one place. But since it's considered better practise to separate the .h and .cpp, I rectified this
	//in later commits.
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


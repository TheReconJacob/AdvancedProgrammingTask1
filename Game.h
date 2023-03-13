#pragma once
#include "GameComponent.h"

class Game
{
private:
	int componentCount = 0;
	GameComponent** components;
	typedef void (*FP)();
	FP initialise;
	FP terminate;
	const int TICKS_1000MS;

public:
	void Add(GameComponent* gameComponent)
	{
		components[componentCount] = gameComponent;
		componentCount++;
	}

	Game(int maxComponents)
	{

	}

	void Run()
	{

	}

	void SetInitialise(FP init)
	{
		initialise = init;
	}

	void SetTerminate(FP term)
	{
		terminate = term;
	}
};


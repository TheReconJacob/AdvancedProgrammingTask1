#pragma once
#include "GameComponent.h"

class Game
{
private:
	int componentCount;
	GameComponent** components;
	typedef void FP();
	FP initialise;
	FP terminate;
	const int TICKS_1000MS;

public:
	void Add(GameComponent* gameComponent)
	{
		components = new GameComponent*(gameComponent);
	}

	Game(int maxComponents)
	{

	}

	void Run()
	{

	}

	void SetInitialise(FP init)
	{

	}

	void SetTerminate(FP term)
	{

	}
};


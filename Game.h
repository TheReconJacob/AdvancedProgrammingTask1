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
	void Add(GameComponent* gameComponent)
	{
		components[componentCount] = gameComponent;
		componentCount++;
	}

	Game() {}

	Game(int maxComponents)
	{
		components = new GameComponent*[maxComponents];
		componentCount = 0;
	}

	void Run()
	{
		initialise;
		for (int i = 0; i < componentCount; i++)
		{
			for(int inv = 0; inv < 5; inv++)
			{
				time_t now = time(0);
				tm invokedTime;
				localtime_s(&invokedTime, &now);
				components[i]->Update(&invokedTime);
				Sleep(TICKS_1000MS);
			}
		}
		terminate;
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


#include "Game.h"

void Game::Add(GameComponent* gameComponent)
{
	components[componentCount] = gameComponent;
	componentCount++;
}

Game::Game(int maxComponents)
{
	components = new GameComponent * [maxComponents];
	componentCount = 0;
}

void Game::Run()
{
	initialise();
	for (int i = 0; i < componentCount; i++)
	{
		for (int inv = 0; inv < 5; inv++)
		{
			time_t now = time(0);
			tm invokedTime;
			localtime_s(&invokedTime, &now);
			components[i]->Update(&invokedTime);
			Sleep(TICKS_1000MS);
		}
	}
	terminate();
}

void Game::SetInitialise(FP init)
{
	initialise = init;
}

void Game::SetTerminate(FP term)
{
	terminate = term;
}
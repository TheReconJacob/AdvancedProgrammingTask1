#include "GameComponent.h"

int GameComponent::instances = 0;

GameComponent::GameComponent()
{
	instances++;
	id = instances;
}

void GameComponent::Update(const tm* eventTime)
{
	std::cout << "ID: " << id << std::endl;
	char displayedTime[50];
	strftime(displayedTime, sizeof(displayedTime), "%I:%M:%S%p", eventTime);
	std::cout << "Time of Invocation: " << displayedTime << std::endl;
}
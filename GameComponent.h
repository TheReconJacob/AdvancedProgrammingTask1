#pragma once
#include <ctime>
#include <iostream>
class GameComponent
{
private:
	int id;
	int instances = 0;

public:
	GameComponent()
	{
		instances++;
		id = instances;
	}

	void Update(const tm* invokedTime)
	{
		std::cout << "ID: " << id;
		std::cout << "Time of Invocation: " << instances;
	}
};


#pragma once
#include <ctime>
#include <iostream>
class GameComponent
{
private:
	int id;
	static int instances; //initialised in .cpp file
public:
	GameComponent()
	{
		instances++;
		std::cout << instances << std::endl;
		id = instances;
	}

	virtual void Update(const tm* eventTime)
	{
		std::cout << "ID: " << id << std::endl;
		std::cout << "Time of Invocation: " << eventTime << std::endl;
	}
};


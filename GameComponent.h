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
		id = instances;
	}

	virtual void Update(const tm* eventTime)
	{
		std::cout << "ID: " << id << std::endl;
		char displayedTime[50];
		strftime(displayedTime, sizeof(displayedTime), "%I:%M:%S%p", eventTime);
		std::cout << "Time of Invocation: " << displayedTime << std::endl;
	}
};


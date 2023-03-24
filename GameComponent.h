#pragma once
#include <ctime>
#include <iostream>
class GameComponent
{
private:
	int id;
	static int instances; //initialised in .cpp file
public:
	GameComponent();
	virtual void Update(const tm* eventTime);
};


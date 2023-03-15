#pragma once
#include "GameComponent.h"
#include <minwindef.h>
class DrawableGameComponent : public GameComponent
{

private:
	int x;
	int y;

public:
	enum Direction { Left, Right, Up, Down };
	Direction direction;
	const int SCREEN_HEIGHT = 20;
	const int SCREEN_WIDTH = 80;

private:
	void ChangeDirection()
	{

	}

	void Draw()
	{

	}
public:

	DrawableGameComponent(int instanceX, int instanceY)
	{
		x = 0;
		y = 0;
		direction = Right;
	}
	void Update(const tm* eventTime)
	{
		std::cout << "Time of Invocation: " << eventTime;
		switch (direction) {
		case Left:
			if(x > 0) x - 1;
			break;
		case Right:
			if (x < SCREEN_WIDTH) x + 1;
			break;
		case Down:
			if (y > 0) y - 1;
			break;
		case Up:
			if (y < SCREEN_HEIGHT) y + 1;
			break;
		}
		Draw();
		ChangeDirection();
	}
};


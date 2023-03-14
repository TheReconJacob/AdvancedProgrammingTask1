#pragma once
#include "GameComponent.h"
class DrawableGameComponent : public GameComponent
{

private:
	int x;
	int y;

public:
	enum Direction { Left, Right, Up, Down };
	Direction direction;
	const int SCREEN_HEIGHT;
	const int SCREEN_WIDTH;

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

	}
	void Update(const tm* eventTime)
	{
	}
};


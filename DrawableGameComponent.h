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

private:
	void ChangeDirection()
	{

	}

	void Draw()
	{

	}
};


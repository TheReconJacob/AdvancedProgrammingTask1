#pragma once
#include "GameComponent.h"
#include <windows.h>
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
		Direction newDirection;
		for (newDirection = direction; newDirection == direction;)
		{
			newDirection = Direction(std::rand() % (Down + 1 - Left) + Left);
		}
		direction = newDirection;
	}

	void Draw()
	{
		std::cout << "Current Direction: " << direction << ", X: " << x << ", Y: " << y << std::endl;
	}
public:

	DrawableGameComponent(int instanceX, int instanceY)
	{
		x = instanceX;
		y = instanceY;
		direction = Right;
	}
	void Update(const tm* eventTime)
	{
		GameComponent::Update(eventTime);
		switch (direction) {
		case Left:
			if(x > 0) x -= 1;
			break;
		case Right:
			if (x < SCREEN_WIDTH) x += 1;
			break;
		case Down:
			if (y > 0) y -= 1;
			break;
		case Up:
			if (y < SCREEN_HEIGHT) y += 1;
			break;
		}
		Draw();
		ChangeDirection();
	}
};


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
	void ChangeDirection();
	void Draw();

public:
	DrawableGameComponent(int instanceX, int instanceY);
	void Update(const tm* eventTime);
};


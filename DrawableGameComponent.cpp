#include "DrawableGameComponent.h"

void DrawableGameComponent::ChangeDirection()
{
	Direction newDirection;
	for (newDirection = direction; newDirection == direction;)
	{
		newDirection = Direction(std::rand() % (Down + 1 - Left) + Left);
	}
	direction = newDirection;
}

void DrawableGameComponent::Draw()
{
	std::string directionValue;

	switch (direction) {
	case Left:
		directionValue = "Left";
		break;
	case Right:
		directionValue = "Right";
		break;
	case Down:
		directionValue = "Down";
		break;
	case Up:
		directionValue = "Up";
		break;
	}

	std::cout << "Current Direction: " << directionValue << ", X: " << x << ", Y: " << y << std::endl;
}

DrawableGameComponent::DrawableGameComponent(int instanceX, int instanceY)
{
	x = instanceX;
	y = instanceY;
	direction = Right;
}
void DrawableGameComponent::Update(const tm* eventTime)
{
	//By calling the gamecomponent update function, I can meet the requirements of having the ID logged despite it being
	//private and not accessible in this class. Accessing it here directly would have required it to be changed to
	//protected or public.
	GameComponent::Update(eventTime);
	switch (direction) {
	case Left:
		if (x > 0) x -= 1;
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
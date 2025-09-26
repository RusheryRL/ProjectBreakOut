#pragma once

namespace projectBreakOut
{
	struct Ball
	{
		float posX = 0.0f;
		float posY = 0.0f;
		float r = 0.0f;
		float speedX = 0.0f;
		float speedY = 0.0f;

		bool newKickOff = true;
	};

	//constants
	const float ballSpeedX = 250.0f;
	const float ballSpeedY = 150.0f;
	const float ballRadio = 10.0f;

	//functions
	Ball initBall(float x, float y, float r, float speedX, float speedY);

	void ballMovement(Ball& ball);
	void ballScreenCollision(Ball& ball);

	bool resetBall(Ball& ball);
}


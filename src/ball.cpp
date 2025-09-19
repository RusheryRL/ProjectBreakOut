#include "ball.h"
#include "sl.h"
#include <iostream>

/*namespace projectBreakOut
{
	Ball initBall(float x, float y, float r, float speedX, float speedY)
	{
		Ball ball;

		ball.posX = x;
		ball.posY = y;
		ball.r = r;
		ball.speedX = speedX;
		ball.speedY = speedY;

		return ball;
	}

	void ballMovement(Ball& ball)
	{
		ball.posX += ball.speedX * GetFrameTime();
		ball.posY += ball.speedY * GetFrameTime();
	}

	void ballScreenCollision(Ball& ball)
	{
		if (ball.posY >= (GetScreenHeight() - ball.r) || ball.posY <= ball.r)
			ball.speedY *= -1.0f;

		if (ball.posX >= (GetScreenWidth() - ball.r) || ball.posX <= ball.r)
			ball.speedX *= -1.0f;
	}

	void kickOff(Ball& ball)
	{
		float koX = 0;
		float koY = 0;

		do
		{
			koX = GetRandomValue(-1, 1);
			koY = GetRandomValue(-1, 1);
		} while (koX == 0 || koY == 0);

		ball.speedX *= koX;
		ball.speedY *= koY;
	}

	bool resetBall(Ball& ball)
	{
		if (ball.newKickOff)
		{
			ball = initBall(GetScreenWidth() / 2, (GetScreenHeight() - ballRadio) / 2, ballRadio, ballSpeedX, ballSpeedY);
			kickOff(ball);
			ball.newKickOff = false;
			return true;
		}
		else
			return false;
	}
}*/
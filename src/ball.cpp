#include "ball.h"
#include "sl.h"
#include "windowManagment.h"
#include "iostream"
using namespace std;

namespace projectBreakOut
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
		ball.posX += ball.speedX * slGetDeltaTime();
		ball.posY += ball.speedY * slGetDeltaTime();
	}

	void ballScreenCollision(Ball& ball)
	{
		if (ball.posY >= (screenHeight - (ball.r / 2.0f)) || ball.posY <= ball.r / 2.0f)
		{
			cout << "tap" << endl;
			ball.speedY *= -1.0f;
		}

		if (ball.posX >= (screenWidth - (ball.r / 2.0f)) || ball.posX <= ball.r / 2.0f)
		{
			cout << "tap" << endl;
			ball.speedX *= -1.0f;
		}
	}

	bool resetBall(Ball& ball)
	{
		if (ball.newKickOff)
		{
			ball = initBall(screenWidth / 2, (screenHeight - ballRadio) / 2, ballRadio, ballSpeedX, ballSpeedY);
			ball.newKickOff = false;
			return true;
		}
		else
			return false;
	}
}
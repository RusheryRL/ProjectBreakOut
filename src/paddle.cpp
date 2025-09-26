#include "sl.h"
#include "paddle.h"
#include "gameplay.h"
#include "windowManagment.h"

namespace projectBreakOut
{
	Paddle initPaddle(float x, float y, float w, float h, float speedX, string name, int points, bool winner)
	{
		Paddle paddle;

		paddle.posX = x;
		paddle.posY = y;
		paddle.h = h;
		paddle.w = w;
		paddle.speedX = speedX;
		paddle.playerName = name;
		paddle.points = points;
		paddle.isWinner = winner;

		return paddle;
	}

	void playerMovement(Paddle& player)
	{
		if (slGetKey(SL_KEY_LEFT))
			player.posX -= paddleSpeedX * slGetDeltaTime();
		else if (slGetKey(SL_KEY_RIGHT))
			player.posX += paddleSpeedX * slGetDeltaTime();
	}

	void paddleScreenCollision(Paddle& player)
	{
		if (player.posX <= paddleW / 2)
		{	
			player.posX = paddleW / 2;
		}
		else if (player.posX >= (screenWidth - paddleW/2))
		{
			player.posX = (screenWidth - paddleW / 2);
		}
	}

	void checkWin(Paddle& paddle)
	{
		if (paddle.points == pointsToWin)
		{
			paddle.isWinner = true;
		}
	}

	void playerCollision(Ball& ball, Paddle& player)
	{
		if (ballPaddleCollision(ball, player) <= ball.r)
		{
			if (ball.posX <= player.posX + paddleW + ball.r)
			{
				ball.posX += ball.r;
				ball.speedX *= -1.1f;
			}
			else if (ball.posX <= player.posX + paddleW + ball.r && ball.posY >= player.posY + paddleH + ball.r)
			{
				ball.posX += ball.r;
				ball.posY += ball.r;
				ball.speedX *= -1.1f;
			}
		}
		player.isHit = true;
	}

	float ballPaddleCollision(Ball ball, Paddle paddle)
	{
		float testX = ball.posX;
		float testY = ball.posY;

		if (ball.posX < paddle.posX)
		{
			testX = paddle.posX;
		}
		else if (ball.posX > paddle.posX + paddleW)
		{
			testX = paddle.posX + paddleW;
		}

		if (ball.posY < paddle.posY)
		{
			testY = paddle.posY;
		}
		else if (ball.posY > paddle.posY + paddleH)
		{
			testY = paddle.posY + paddleH;
		}

		float distX = ball.posX - testX;
		float distY = ball.posY - testY;

		float distanceXY = sqrt((distX * distX) + (distY * distY));

		return distanceXY;
	}
}
#include "sl.h"
#include "paddle.h"

/*namespace projectBreakOut
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

	void player1Movement(Paddle& player)
	{
		if (IsKeyDown(KEY_W))
			player.posY -= paddleSpeedY * GetFrameTime();
		else if (IsKeyDown(KEY_S))
			player.posY += paddleSpeedY * GetFrameTime();
	}

	void paddleScreenCollision(Paddle& player)
	{
		if (player.posY <= 0)
		{
			player.posY = 0;
		}
		else if (player.posY >= (GetScreenHeight() - paddleH))
		{
			player.posY = (GetScreenHeight() - paddleH);
		}
	}

	void checkWin(Paddle& paddle)
	{
		if (paddle.points == pointsToWin)
		{
			paddle.isWinner = true;
		}
	}

	void player1Collision(Ball& ball, Paddle& player)
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

	void player2Collision(Ball& ball, Paddle& player)
	{
		if (ballPaddleCollision(ball, player) <= ball.r)
		{
			if (ball.posX >= player.posX - paddleW - ball.r)
			{
				ball.posX -= ball.r;
				ball.speedX *= -1.1f;
			}
			else if (ball.posX >= player.posX - paddleW - ball.r && ball.posY >= player.posY + paddleH + ball.r)
			{
				ball.posX -= ball.r;
				ball.posY -= ball.r;
				ball.speedX *= -1.1f;

			}
		}
		player.isHit = true;
	}

	void checkPlayerGoal(Paddle& player, Ball& ball)
	{
		if (ball.posX >= (GetScreenWidth() - 10.0f))
		{
			player.points++;
			ball.newKickOff = true;
		}
	}

	void checkAIGoal(Paddle& AI, Ball& ball)
	{
		if (ball.posX <= 10.0f)
		{
			AI.points++;
			ball.newKickOff = true;
		}
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
}*/
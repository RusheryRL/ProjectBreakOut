#include "sl.h"

#include "windowManagment.h"
#include "gameplay.h"
#include "paddle.h"
#include "ball.h"

namespace projectBreakOut
{
	void runGame()
	{
		//initWindow
		slWindow(screenWidth, screenHeight, "projectBreakOut", false);

		//initVars
		Ball ball = initBall(screenWidth / 2, screenHeight / 2, 10.0f, ballSpeedX, ballSpeedY);
		Paddle paddle = initPaddle(screenWidth / 2, screenHeight / 10, paddleW, paddleH, paddleSpeedX, "You", 0, false);

		while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
		{
			//update
			ballMovement(ball);
			ballScreenCollision(ball);
			paddleScreenCollision(paddle);
			ballPaddleCollision(ball, paddle);
			playerMovement(paddle);
			playerCollision(ball, paddle);

			//texturas a dibujar
			slSetBackColor(0, 0, 0);
			slRectangleOutline(paddle.posX, paddle.posY, paddle.w, paddle.h);
			slCircleOutline(ball.posX, ball.posY, ball.r, 10);

			//hace el dibujado
			slRender();
		}

		//cierraWindow
		slClose();
	}
}
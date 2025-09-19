#pragma once
#include <iostream>

#include "ball.h"
#include "gameplay.h"

namespace projectBreakOut
{
	using namespace std;

	struct Paddle
	{
		int points = 0;
		float posX = 0.0f;
		float posY = 0.0f;
		float w = 0.0f;
		float h = 0.0f;
		float speedX = 0.0f;

		bool isWinner = false;
		bool isHit = false;
		bool isAI = false;

		string playerName = " ";
	};

	//constants
	const int paddleH = 120;
	const int paddleW = 20;

	const float paddleSpeedX = 250.0f;

	//functions
	Paddle initPaddle(float x, float y, float w, float h, float speedX, string name, int points, bool winner);

	void player1Movement(Paddle& player);
	void paddleScreenCollision(Paddle& player);
	void checkWin(Paddle& paddle);
	void player1Collision(Ball& ball, Paddle& player);

	float ballPaddleCollision(Ball ball, Paddle paddle);
}
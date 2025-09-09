#pragma once
#include <iostream>
#include <string>	
#include "GameState.h"
#include <memory>

class GameManager{
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;
public:
	GameManager() :isRunning(true), gameTime(0.0f) {}
	void ChangeState(std::unique_ptr<GameState> newState) {
		if (currentState) {
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}
	void Update(float deltaTime) {
		gameTime += deltaTime;
		if (currentState) {
			currentState->OnUpdate(this, deltaTime);
		}
	}
};



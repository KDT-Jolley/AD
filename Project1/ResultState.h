#pragma once
#include "GameState.h"
#include "GameManager.h"
#include <iostream>
#include <string>	
#include <memory>
#include "MainMenuState.h"
class ResultState : public GameState {
public:
	void OnEnter(GameManager * manager) {
		std::cout << "リザルト画面" << std::endl;
	}
	void OnUpdate(GameManager * manager, float deltaTime) {
		if (manager) {
			manager->ChangeState(std::make_unique<GameState>());
		}
	}
	void OnExit(GameManager * manager) {
		std::cout << "リザルト画面を終了" << std::endl;
	}
	const std::string GetName() const { return "Result"; }

};
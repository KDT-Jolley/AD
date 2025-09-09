#pragma once
#include "GameState.h"
#include "GameManager.h"
#include <iostream>
#include <string>	
#include <memory>
#include "TitleState.h"
#include "InGameState.h"

class MainMenuState : public GameState {
public:
	void OnEntry(GameManager * manager) {
		std::cout << "���C�����j���[���" << std::endl;
	}
	void OnUpdete(GameManager * manager, float deltaTime) {
		if (manager) {
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}
	void OnExit(GameManager * manager) {
		std::cout << "���C�����j���[��ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "Main"; }
};

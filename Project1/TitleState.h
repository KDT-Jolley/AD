#pragma once
#include "GameState.h"
#include "GameManager.h"
#include <iostream>
#include <string>
#include <memory>
#include "MainMenuState.h"
class TitleState : public GameState {
public:
	void OnEnter(GameManager * manager) {
		std::cout << "�^�C�g�����" << std::endl;
	}
	void OnUpdate(GameManager * manager, float deltaTime) {
		if (manager) {
			manager->ChangeState(std::make_unique<MainMenuState>());
		}
	}
	void OnExit(GameManager * manager) {
		std::cout << "�^�C�g����ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "Title"; }
};

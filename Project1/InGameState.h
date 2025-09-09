#pragma once
#include "GameState.h"
#include "GameManager.h"
#include <iostream>
#include <string>
#include <memory>
#include "MainMenuState.h"
#include "ResultState.h"
class InGameState : public GameState {
public:
	void OnEntry(GameManager * manager) {
		std::cout << "�C���Q�[�����" << std::endl;
	}
	void OnUpdete(GameManager * manager, float deltaTime) {
		if (manager) {
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}
	void OnExit(GameManager * manager) {
		std::cout << "�C���Q�[����ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "InGame"; }
};
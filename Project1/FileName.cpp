#include <iostream>
#include <string>
#include <memory>
#include "GameManager.h"
#include "TitleState.h"
#include "GameState.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "ResultState.h"


namespace ConsoleInput {
	char GetChar() {
		return std::cin.get();
	}
	std::string GetString() {
		std::string input;
		std::getline(std::cin, input);
		return input;
	}
};

int main() {
	GameManager gameManager;
	gameManager.ChangeState(std::make_unique<TitleState>());
	while (true) {
		gameManager.Update(0.016f);
		std::cout << "Press Enter to continue..." << std::endl;
		ConsoleInput::GetChar();
	}
	return 0;
}
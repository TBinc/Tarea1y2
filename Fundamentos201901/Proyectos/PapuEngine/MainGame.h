#pragma once
#include <SDL\SDL.h>
#include <GL\glew.h>
#include "GLS_Program.h"
#include "Sprite.h"
#include "Window.h"
#include "Camera2D.h"
#include <vector>
#include "InputManager.h"
#include "SpriteBatch.h"
#include "Level.h"
#include "Player.h"
#include "Zombie.h"
#include "Human.h"
#include "SpriteBG.h"
#include <random>
#include <ctime>


enum class GameState
{
	PLAY, EXIT
};


class MainGame
{
private:
	int _witdh;
	int _height;
	float _time;
	Window _window;
	void init();
	Player* player;
	void procesInput();
	void handleInput();
	GLS_Program _program;
	vector<Sprite*> _sprites;
	Camera2D _camera;
	SpriteBatch spritebatch;
	InputManager inputManager;
	vector<Level*> levels;
	vector<Zombie*> zombies;
	vector<Human*> humans;
	vector<SpriteBG*> spriteBG;
	void updateElements();
	int currentLevel;
	void initLevel();
	mt19937 randomEngine = mt19937(time(nullptr));
	std::uniform_int_distribution<int> randomX;
	std::uniform_int_distribution<int> randomY;

public:
	MainGame();
	~MainGame();
	GameState _gameState;
	void initShaders();
	void run();
	void draw();
	void update();
};


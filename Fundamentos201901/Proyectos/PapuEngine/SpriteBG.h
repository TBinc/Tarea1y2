#pragma once
#include <glm\glm.hpp>
#include "SpriteBatch.h"
#include "GLTexture.h"
#include <string>
#include "Agent.h"

class SpriteBG
{
protected:
	glm::vec2 position;
	std::string path;
	Color color;
public:
	void draw(SpriteBatch& spritebatch);
	glm::vec2 getPosition() const {
		return position;
	}
	SpriteBG();
	void init(glm::vec2 _position, std::string _path);
	~SpriteBG();
};


#include "SpriteBG.h"
#include "ResourceManager.h"
#include <iostream>

void SpriteBG::draw(SpriteBatch& spritebatch)
{
	int textureID =
		ResourceManager::getTexture(path).id;
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(position.x, position.y, AGENT_WIDTH, AGENT_WIDTH);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}

void SpriteBG::init(glm::vec2 _position, std::string _path)
{
	position = _position;
	path = _path;
}

SpriteBG::SpriteBG()
{
	color.r = 255;
	color.g = 255;
	color.b = 255;
	color.a = 255;
}

SpriteBG::~SpriteBG()
{
}


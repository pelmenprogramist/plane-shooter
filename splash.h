#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"
#include <string>

class Splash {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Splash() {
		texture.loadFromFile(IMAGES_FOLDER + "you_loose.jpg");
		sprite.setTexture(texture);
	}
sf::Sprite getSprite() { return sprite; }

};
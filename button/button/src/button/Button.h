#pragma once
#include <SFML/Graphics.hpp>
class Button : public sf::Drawable, public sf::Transformable
{
public:
	sf::RectangleShape button;
	Button(float x, float y,sf::Color,float originX, float originY, float posX, float posY);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	bool trigger(sf::Vector2f worldMousePos, bool mousePress);
	~Button();
};
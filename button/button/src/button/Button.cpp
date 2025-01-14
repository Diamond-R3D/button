#include "Button.h"

Button::Button(float x, float y, sf::Color color, float originX, float originY, float posX, float posY)
{
    button.setSize(sf::Vector2f(x, y));
    button.setFillColor(color);
    button.setOrigin(originX, originY);
    button.setPosition(posX, posY);
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(button, states);
}

bool Button::trigger(sf::Vector2f worldMousePos, bool mousePress)
{
    if (button.getGlobalBounds().contains(worldMousePos) && mousePress)
        return true;
    else
        return false;
}

Button::~Button()
{
}

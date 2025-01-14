#include "Color.h"

void Color::SwapColor()
{
    if (color == sf::Color::Black) {
        color = sf::Color::Cyan;
    }
    else if (color == sf::Color::Cyan) {
        color = sf::Color::Yellow;
    }
    else if (color == sf::Color::Yellow) {
        color = sf::Color::Red;
    }
    else if (color == sf::Color::Red) {
        color = sf::Color::Green;
    }
    else if (color == sf::Color::Green) {
        color = sf::Color::Magenta;
    }
    else if (color == sf::Color::Magenta) {
        color = sf::Color::Blue;
    }
    else if (color == sf::Color::Blue) {
        color = sf::Color::Black;
    }
}

void Color::SetColor()
{
    color = sf::Color::Magenta;
}

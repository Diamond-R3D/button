#include <SFML/Graphics.hpp>
#include "Button.h"
#include "Color.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Button");

    sf::View v = window.getView();
    v.setCenter(0, 0);
    window.setView(v);

    Button buttonColor(200, 50, sf::Color::White, 100, 25, 0, 0);
    Button buttonQuit(200, 50, sf::Color::White, 100, 25, 0, 200);

    Color clearColor;
    clearColor.SetColor();
    while (window.isOpen())
    {
        bool mousePress = false;
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePress = true;
                }
            }
        }
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);

        if (buttonColor.trigger(worldMousePos,mousePress))
        {
            clearColor.SwapColor();
        }

        if (buttonQuit.trigger(worldMousePos, mousePress)) {
            window.close();
        }

        window.clear(clearColor.color);

        window.draw(buttonColor);
        window.draw(buttonQuit);

        window.display();
    }
}
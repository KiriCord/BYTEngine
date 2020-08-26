#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

//g++ .\BYTEnigne.cpp -o .\BYTEnigne -I"PATH" -L"PATH" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!"); //sf::Style::Fullscreen);
    sf::CircleShape square(350);
    square.setOutlineThickness(10.f);
    square.setOutlineColor(Color(255,215,0));

    sf::Texture texture;
    //sf::RenderTexture();
    texture.loadFromFile("D:\\dirt2.jpg");
    sf::Texture trunov;
    trunov.loadFromFile("D:\\dirt.jpg");
    sf::Sprite sprite(texture);
    sprite.scale(0.3f,0.4f);

    // map a 100x100 textured rectangle to the shape
    square.setTexture(&trunov); // texture is a sf::Texture
    square.setTextureRect(sf::IntRect(0, -100, 400, 400));
    //square.rotate(-20.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.draw(square);
        window.display();
    }

    return 0;
}
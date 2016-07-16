#include <SFML/Graphics.hpp>
#include "desktop/desktop.hpp"
#include "window/window.hpp"
#include "shape/shape.hpp"
int main()
{
    /*sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }*/
    egi::Shape shape(10.f);
    shape.setFillColor(sf::Color::Green);

    egi::Window win2(200, 200, "win2");
    //egi::Window win1(400, 400, "win1");

    //win2.display(shape);

    while (/*win1.isOpen() || */win2.isOpen())
    {

        //win1.staff();
        //win1.display();

        win2.staff();
        win2.clear();
        win2.draw(shape);
        win2.display();
        //win.clear();
        //window.draw(shape);

    }

    return 0;
}

#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include "../shape/shape.hpp"
#include <vector>

namespace egi
{
    class Window
    {
        private:
            std::vector < egi::Shape > m_shape_table;
            sf::RenderWindow *m_window;
            sf::Event *m_event;
        public:
            Window();
            Window(unsigned int _width, unsigned int _height, std::string _title, uint32_t _style = sf::Style::Default, const sf::ContextSettings &_settings = sf::ContextSettings());
            void create(unsigned int _width, unsigned int _height, std::string _title, uint32_t _style = sf::Style::Default, const sf::ContextSettings &_settings = sf::ContextSettings());
            //setPosition(sf::Vector2i _position);
            //setPosition(unsigned int _position_x, unsigned int _position_y);
            //setSize(sf::Vector2i _position);
            //setSize(unsigned int _size_x, unsigned int _size_y);
            void draw(egi::Shape &_shape);
            void staff();
            void clear();
            void display();
            bool isOpen();
            bool pollEvent(sf::Event &_event);
            void close();
            ~Window();
    };
}

#endif // WINDOW_HPP_INCLUDED

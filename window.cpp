#include "window.hpp"

egi::Window::Window()
{
    m_event = new sf::Event;
}
egi::Window::Window(unsigned int _width,
                    unsigned int _height,
                    std::string _title,
                    uint32_t _style,
                    const sf::ContextSettings &_settings)
{
    m_event = new sf::Event;
    egi::Window::m_window = new sf::RenderWindow(sf::VideoMode(_width, _height), _title, _style, _settings);
    //m_window->setFramerateLimit(30);
}
void egi::Window::create(unsigned int _width,
                    unsigned int _height,
                    std::string _title,
                    uint32_t _style,
                    const sf::ContextSettings &_settings)
{
    egi::Window::m_window = new sf::RenderWindow(sf::VideoMode(_width, _height), _title, _style, _settings);
    //m_window->setFramerateLimit(30);
}
void egi::Window::draw(egi::Shape &_shape)
{
    //m_shape_table.push_back(_shape);
    egi::Window::m_window->draw(*(_shape).draw());
}
void egi::Window::clear()
{
    egi::Window::m_window->clear();
}
void egi::Window::display()
{
    //egi::Window::m_window->clear();
    /*for(std::vector<egi::Shape>::iterator _shape = m_shape_table.begin(); _shape != m_shape_table.end(); _shape++)
        egi::Window::m_window->draw(*((*_shape).draw()));*/
    /*for(int a = 0; a < m_shape_table.size(); a++)
        egi::Window::m_window->draw(*(m_shape_table[a].draw()));*/
    //m_window->draw(shape);
    egi::Window::m_window->display();
}
void egi::Window::staff()
{
    //egi::Window::m_window->setActive(true);
    while (egi::Window::m_window->pollEvent(*m_event))
    {
        if (m_event->type == sf::Event::Closed)
            egi::Window::m_window->close();
    }
    //this->display();
    egi::Window::m_window->display();
    //egi::Window::m_window->setActive(false);
}
bool egi::Window::isOpen()
{
    return egi::Window::m_window->isOpen();
}
bool egi::Window::pollEvent(sf::Event &_event)
{
    //egi::Window::m_window->pollEvent(_event);

    /*if(egi::Window::m_window->pollEvent(_event) != sf::Event::None)return 1;
    else return 0;*/
    return 1;
}
void egi::Window::close()
{
    //egi::Window::m_window->close();
}
egi::Window::~Window()
{

}

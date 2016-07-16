#ifndef DESKTOP_HPP_INCLUDED
#define DESKTOP_HPP_INCLUDED
#include <SFML/Graphics.hpp>
namespace egi
{
    class Desktop
    {
        private:
            sf::VideoMode m_desktop;
        public:
            Desktop();
            unsigned int getDesktopWidth();
            unsigned int getDesktopHeight();
            unsigned int getBitsPerPixel();
    };
}

#endif // DESKTOP_HPP_INCLUDED

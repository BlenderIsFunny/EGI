#include "desktop.hpp"

egi::Desktop::Desktop()
{
    egi::Desktop::m_desktop = sf::VideoMode::getDesktopMode();
}
unsigned int egi::Desktop::getDesktopWidth()
{
    return egi::Desktop::m_desktop.width;
}
unsigned int egi::Desktop::getDesktopHeight()
{
    return egi::Desktop::m_desktop.height;
}
unsigned int egi::Desktop::getBitsPerPixel()
{
    return egi::Desktop::m_desktop.bitsPerPixel;
}

#include "shape.hpp"

egi::Shape::Shape(float _abc)
{
    m_shape = new sf::CircleShape(_abc);
}
void egi::Shape::setFillColor(const sf::Color &_color)
{
    m_shape->setFillColor(_color);
}
sf::Shape *egi::Shape::draw()
{
    return m_shape;
}

#ifndef SHAPE_HPP_INCLUDED
#define SHAPE_HPP_INCLUDED

#include <SFML/Graphics.hpp>

namespace egi
{
    class Shape
    {
        private:
            sf::Shape *m_shape;
        public:
            Shape(float _abc);
            void setFillColor(const sf::Color &_color);
            sf::Shape *draw();
    };
}

#endif // SHAPE_HPP_INCLUDED

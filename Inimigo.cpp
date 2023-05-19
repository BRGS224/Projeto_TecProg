#include "Inimigo.h"

Entidades::Inimigo::Inimigo():nivel_maldade(1)
{
	body.setFillColor(sf::Color::Magenta);
	body.setPosition(sf::Vector2f(200.f, 200.f));
}

Entidades::Inimigo::~Inimigo()
{
}

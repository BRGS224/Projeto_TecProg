#include "Jogador.h"

Entidades::Jogador::Jogador()
{
}

Entidades::Jogador::~Jogador()
{
}

void Entidades::Jogador::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
		body.move(sf::Vector2f(0.1f, 0.f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		body.move(sf::Vector2f(-0.1f, 0.f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		body.move(sf::Vector2f(0.f, -0.1f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		body.move(sf::Vector2f(0.f, 0.1f));
	}
}

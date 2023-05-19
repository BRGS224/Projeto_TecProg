#pragma once
#include "SFML/Graphics.hpp"
namespace Entidades {
	class Entidade
	{
	protected:
		float coordX;
		float coordY;

		sf::RectangleShape body;
		sf::RenderWindow* window;
	public:
		Entidade();
		~Entidade();

		void setWindow(sf::RenderWindow* window) { this->window = window; }
		void draw() { window->draw(body); }
	};
}
#include "Jogo.h"

Jogo::Jogo():
	window(sf::VideoMode(400, 400), "Jogo")
{
    jogador1 = new Jogador();
    jogador1->setWindow(&window);
    fase1 = new Fase(jogador1,&window);
    lEs = fase1->getListaEntidades();
    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        jogador1->move();
        window.clear();
        for (int i= 0; i < lEs->lEs.getLen(); i++) {
            Entidade* temp = lEs->lEs.getItem(i);
            temp->draw();
        }
        window.display();
    }

    return ;
}

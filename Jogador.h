#pragma once
#include "Entidade.h"
namespace Entidades {
    class Jogador :
        public Entidade
    {
    private:

    public:
        Jogador();
        ~Jogador();

        void move();
    };
}

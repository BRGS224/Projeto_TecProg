#pragma once
#include "Entidade.h"
namespace Entidades{
    class Inimigo :
        public Entidade
    {
    protected:
        int nivel_maldade;

    public:
        Inimigo();
        ~Inimigo();

    };
}

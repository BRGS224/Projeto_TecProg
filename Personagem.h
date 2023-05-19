#pragma once
#include "Entidade.h"
namespace Entidades {
	class Personagem
	{
	protected:
		int num_vidas;

	public:
		Personagem();
		~Personagem();

		virtual void Executar() = 0;

	};
}

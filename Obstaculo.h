#pragma once
#include "Entidade.h"
namespace Entidades {
	class Obstaculo:
		public Entidade 
	{
	protected:
		bool danoso;
	public:
		Obstaculo();
		~Obstaculo();
		virtual void Executar() = 0;

	};
}

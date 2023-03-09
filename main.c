#include "jogador.h"
#include "inventario.h"
#include <string.h>
#include <stdbool.h>

Jogador* Inicializar();
void Pausa();

int main(int argc, char *argv[]) {
	
	Jogador* j = inicializar_jogador();
	detalhar_jogador(j);
	
	return 0;
}

void Pausa(){
	system("pause");
}

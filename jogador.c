#include "jogador.h"

typedef struct jogador {
	char nome[120];
	float vida;
	float forca;
	float defesa;
} Jogador;

Jogador* instancia_jogador(){
	return (Jogador*) malloc(sizeof(Jogador));
}

void detalhar_jogador(Jogador* j){
	printf("Nome: %s\n", &j->nome);
	printf("Vida: %f\n", j->vida);
	printf("Forca %f\n", j->forca);
	printf("Defesa %f\n", j->defesa);
}

Jogador* inicializar_jogador(){
	
	Jogador* j = instancia_jogador();
	
	printf("BEM VINDO JOGADOR!!!\n\n");
	Pausa();
	printf("DIGITE O NOME DO INVOCADOR:\n");
	scanf(" %[^\n]", j->nome);
	getchar();
	
	j->vida = 10;
	j->forca = 10;
	j->defesa = 10;	
	
	return j;
}

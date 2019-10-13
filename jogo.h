#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef JOGO_H
#define JOGO_H

#define LIMP_BUFFERSTRING fflush(stdin)
#define LIMP_TELA system("cls")
#define ESC 27

#define TAM 25

/*typedef struct {
	char *secreta, *forca, *erro, tentativa, digito;
	struct contagem {
		int q_Letras, casas, acertos, acertou, boneco;
	} c;
} palavra;
*/

char p_Secreta[TAM], p_Forca[TAM], digito[TAM], tentativa;
int q_Letras, cont = 0, erro, acertos = 0, boneco = 5;

int validaLetra(char letra);
int verificar_Digito(char *var, char caracter);
int ler_Palavra(char secreta[], char forca[]);
void iniciar_Forca();
void tela_jogo();
void tela_erro();
void ler_Letra();
void jogo_Forca();
void jogo_Placar();

#endif
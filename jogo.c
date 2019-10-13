#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "boneco.h"
#include "jogo.h"

int main() {
	q_Letras = ler_Palavra(p_Secreta, p_Forca);
	iniciar_Forca();
	jogo_Forca();
	jogo_Placar();
	getch();
	return 0;
}

int validaLetra(char letra) {
   return ((letra >='A' && letra<='Z') || (letra >='a' && letra<='z')) && (letra!=13) && (letra!=13);
}

int verificar_Digito(char *var, char caracter) {
	int ver = 0;
	for(int i=0; i < strlen(var); i++) {
		if(var[i] == caracter) {
			ver = 1;
			break;
		}
	}
	return ver;
}
int ler_Palavra(char secreta[], char forca[]) {
	printf("Digite uma palavra: ");
	scanf("%[A-Z,a-z, ]s",secreta); //entrada da palavra secreta
	secreta = strupr(secreta);
	LIMP_BUFFERSTRING; //limpa o buffer
	strcpy(forca, secreta); //copia a palavra secreta para o vetor forca
	return strlen(forca); //conta a quantidade de casas existe na palavra
}

void iniciar_Forca() {
	for(int i=0; i < q_Letras; i++) {
		p_Forca[i] = validaLetra(p_Secreta[i]) ? '_' : p_Secreta[i]; //coloca o traço no lugar da letra
		if(validaLetra(p_Secreta[i]))
			cont++; //conta só as letras sem contar o espaço
	}
}

void tela_jogo() {
	printf("\n\nChances: %d -a palavra tem %d letras\n\n", boneco, cont);
	for(int i=0; i < q_Letras; i++)
		printf("%c ", p_Forca[i]);
	printf("\n\n");
}

void tela_erro() {
	printf("\nTENTATIVAS E ERROS\n\n");
	for(int i=0; i < strlen(digito); i++)
		printf("%c ", digito[i]);
	printf("\n\n");
}

void ler_Letra() {
	printf("Digite uma Letra: ");
	scanf("%[A-Z,a-z]c", &tentativa);
	tentativa = toupper(tentativa);
}

void jogo_Forca() {
	memset(&digito, '\0', sizeof(char)*TAM);
	while(boneco > 0) {
		LIMP_BUFFERSTRING;
		mostrar_forca(boneco);
		tela_jogo();
		tela_erro();
		ler_Letra();
		erro = 0;
		if(verificar_Digito(digito,tentativa) == 1) {
			printf("JA TENTOU ESSA LETRA");
			Sleep(1000);
			continue;
		}
		else {
			erro = 0;
			digito[strlen(digito)] = tentativa;
			for(int i=0; i < q_Letras; i++) {
				if(p_Secreta[i] == tentativa) {
					p_Forca[i] = tentativa;
					erro = 1;
					acertos++;
				}
			}
			if(erro == 0) {
				boneco--;
			}
		}
		if(acertos == cont || tentativa == 27)
			break;
		LIMP_TELA;
	}
}

void jogo_Placar() {
	LIMP_TELA;
	if(boneco == 0) {
		mostrar_forca(boneco);
		tela_jogo();
		tela_erro();
		printf("\n\nVoce perdeu. \nA palavra era: %s\n\n", p_Secreta);
	}
	else {
		mostrar_forca(boneco);
		tela_jogo();
		tela_erro();
		printf("\n\nParabens, voce acertou a palavra %s\n\n", p_Secreta);
	}
}
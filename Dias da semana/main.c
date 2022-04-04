#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int diasemana;
	
		printf("Digite o dia da semana que estamos: ");
		scanf("%d", &diasemana);
		
	
	
		switch(diasemana){
			case 1:
				printf("Hoje é: Domingo\n");
			break;
			
			case 2:
				printf("Hoje é: Segunda-feira\n");
			break;
			
			case 3:
				printf("Hoje é: Terca-feira\n");
			break;
			
			case 4:
				printf("Hoje é: Quarta-feira\n");
			break;
			
			case 5:
				printf("Hoje é: Quinta-feira\n");
			break;
			
			case 6:
				printf("Hoje é: Sexta-feira\n");
			break;
			
			case 7:
				printf("Hoje é: Sabado\n");
			break;
		}
	
	return 0;
}

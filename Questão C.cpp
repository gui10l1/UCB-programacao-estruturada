// ALUNO: GUILHERME RIBEIRO SOARES
// MATRÍCULA: UC21200089

#include <stdio.h>
#include <stdlib.h>

void writeFile(int number);

int main() {
	int number = 0;
	
	printf("Insira um numero para ser guardado: ");
	scanf("%d", &number);
	
	writeFile(number);
	
	printf("Dados guardados com sucesso!");
	
	return 0;
}

void writeFile(int number) {
	FILE *file;
	
	file = fopen("numbers.txt", "a");
	
	if (file == NULL) {
		printf("[ERRO] Erro na abertura do arquivo!");
		return;
	}
	
	fprintf(file, "%d", number);
}


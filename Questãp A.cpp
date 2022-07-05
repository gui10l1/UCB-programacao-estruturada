// ALUNO: GUILHERME RIBEIRO SOARES
// MATRICULA: UC21200089

#include <stdio.h>
#include <stdlib.h>

#define CurrentYear 2022

int main() {
	FILE *file;
	char fileLine[100];
	char *fileResult;
	
	printf("Conteudo atual:\n");
	
	file = fopen("arq01.txt", "ab+");
	
	if (file == NULL) {
		printf("[ERRO] Erro na abertura do arquivo!");
		return 1;
	}
	
	int i = 1;
	
	while (!feof(file))
	{
	    fileResult = fgets(fileLine, 100, file);
	    
	    if (fileResult) {
	    	printf("Linha %d: %s ", i, fileLine);
		}
		
	    i++;
	}
	
	fclose(file);
		
	char userName[50];
	int day, month, year;
	int currentYear = CurrentYear;

	printf("\nInsira seu primeiro nome: ");
	fgets(userName, 255, stdin);
	
	printf("Insira a data de nascimento: ");
	scanf("%d %d %d", &day, &month, &year);
	
	int userAge = currentYear - year;
	
	file = fopen("arq01.txt", "a");
	
	if (file == NULL) {
		printf("[ERRO] Erro na abertura do arquivo!");
		return 1;	
	}
	
	fprintf(file, "%s", fileLine);
	fprintf(file, "%s", userName);
	fprintf(file, "%c", ' ');
	fprintf(file, "%d", userAge);
	fprintf(file, "%c", ' ');
	fprintf(file, "%d/%d/%d", day, month, year);
	
	fclose(file);
	
	printf("Dados gravados com sucesso!");
	
	return 0;
}



#include <stdlib.h> 
#include <stdio.h>


int main() {
	//Saisie de l'année par l'utilisateur
	unsigned short int annee;
	int c = 1;

	printf("Veuillez saisir une annee inferieure ou egale a 10 000 :\n");
	scanf_s("%hu", &annee);

	while ((annee < 0) || (annee > 10000)) {
		printf("!!!!!!!!!Veuillez saisir une annee inferieure ou egale a 10 000 :!!!!!!!!!\n");
		scanf_s("%hu", &annee);
	}


	//Année bissextile ??
	if (annee % 4 == 0)
		c = 0;
	if (annee % 100 == 0)
		c = 1;
	if (annee % 400 == 0)
		c = 0;


	if (c == 0)
		printf("L'annee %d est bissextile\n", annee);
	else
		printf("L'annee %d n'est pas bissextile\n", annee);


	//Deuxième méthode
	if (((annee % 400 != 0) & (annee % 100 == 0)) || (annee % 4 != 0))
		printf("L'annee %d n'est pas bissextile\n", annee);
	else
		printf("L'annee %d est bissextile\n", annee);


	return(EXIT_SUCCESS);
}

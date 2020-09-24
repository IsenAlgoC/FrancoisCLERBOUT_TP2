#include <stdlib.h>
#include <stdio.h> 
#include <math.h>

void echanger(int* valeur1, int* valeur2) {
	int tmp;
	tmp = *valeur1;
	*valeur1 = *valeur2;
	*valeur2 = tmp;
}

int main() {
	int bagage = 1;
	while (bagage == 1) {
		//Saisie des dimensions du bagage en centimètres
		float longueur;
		float largeur;
		float hauteur;

		//Saisie de la longueur

		//la saisie de "||" signifie "ou"
		printf("Veuillez saisir la longueur, en centimetres, de votre bagage :\n");
		scanf_s("%f", &longueur);
		while ((longueur < 1) || (longueur > 150)) {
			printf("!!!!!!!!!Veuillez saisir la longueur de votre bagage qui doit etre comprise entre 1 cm et 150 cm :!!!!!!!!!\n");
			scanf_s("%f", &longueur);
		}


		//Saisie de la largeur
		printf("Veuillez saisir la largeur, en centimetres, de votre bagage :\n");
		scanf_s("%f", &largeur);
		while ((largeur < 1) || (largeur > 150)) {
			printf("!!!!!!!!!Veuillez saisir la largeur de votre bagage qui doit etre comprise entre 1 cm et 150 cm :!!!!!!!!!\n");
			scanf_s("%f", &largeur);
		}


		//Saisie de la hauteur
		printf("Veuillez saisir la hauteur, en centimetres, de votre bagage :\n");
		scanf_s("%f", &hauteur);
		while ((hauteur < 1) || (hauteur > 150)) {
			printf("!!!!!!!!!Veuillez saisir la hauteur de votre bagage qui doit etre comprise entre 1 cm et 150 cm :!!!!!!!!!\n");
			scanf_s("%f", &hauteur);
		}


		//Classement des trois dimensions de la plus grande à la plus petite
		if (largeur < longueur)
			echanger(&longueur, &largeur);
		if (hauteur < longueur)
			echanger(&longueur, &hauteur);
		if (hauteur < largeur)
			echanger(&hauteur, &largeur);
		printf("\nLes dimensions de votre bagage sont %f cm * %f cm * %f cm\n", longueur, largeur, hauteur);


		//Comparaison par rapport au gabarit maximal autorisé en cabine
		if ((hauteur <= 55) & (largeur <= 35) & (longueur <= 25))
			printf("\nVALIDE");
		else
			printf("\nNON VALIDE\n");


		//Relancement automatique du programme 
		printf("\nAvez-vous un autre bagage a traiter ? 1 si OUI et 0 si NON\n");
		scanf_s("%hu", &bagage);
	}

	return(EXIT_SUCCESS);
}
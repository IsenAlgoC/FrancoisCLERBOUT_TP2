#include <stdlib.h>
#include <stdio.h>


//Génération d'un nombre aléatoire que le joueur doit deviner
int main() {
	int essai = 1;
	int joueur;
	int devinette = rand()%100;
	printf("%d\n", devinette);

	//Saisie d'un nombre par l'utilisateur  
	printf("Veuillez saisir un nombre entier :\n");
	scanf_s("%d", &joueur);


	//Comparaison vis-à-vis de la devinette
	while (joueur != devinette) {
		if (joueur < devinette) {
			printf("TROP PETIT\n");
			printf("Veuillez saisir un nombre entier :\n");
			scanf_s("%d", &joueur);
			essai++;
		}
		else {
			printf("TROP GRAND\n");
			printf("Veuillez saisir un nombre entier :\n");
			scanf_s("%d", &joueur);
			essai++;
		}


	}
	
	printf("BRAVO, vous avez gagne en %d essais", essai);


	return(EXIT_SUCCESS);

}
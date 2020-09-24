#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() { 
	//boucle for
	int somme = 0;
	int i = 1;
	unsigned short int n;
	printf("Veuillez saisir l'entier n <= 361 que vous voulez :\n");
	scanf_s("%hu", &n);
	while (n >= 362) {
		printf("!!!!!!!!!Veuillez saisir l'entier n <= 361 que vous voulez :!!!!!!!!!\n");
		scanf_s("%hu", &n);
	}
	for (i = 1; i <= n; i++) {
		somme += i;
	}
	printf("La somme des %d premiers entiers positifs est %d pour la boucle for\n", n, somme);


	//boucle while
	int somme2 = 0;
	int n2 = 1;
	while ((n2 <= n) & (pow(2, 16) - somme2 >= n2)) {
			somme2 += n2;
			n2++;
	}
	printf("La somme des %d premiers entiers positifs est %d pour la boucle while\n", n, somme2);


	//boucle do while
	int somme3 = 0;
	int n3 = 1;
	do {
		somme3 += n3;
		n3++;
	} 
	while (n3 <= n);
	printf("La somme des %d premiers entiers positifs est %d pour la boucle do while\n", n, somme3);


	//valeur maximale de n
	printf("La somme est codee sur %d octets\n", sizeof(unsigned short int));
	printf("La valeur maximale de n pour que la variable representant la somme ait une valeur correcte est 361\n");
		//la somme est codée sur 2 octets, soit 2^16 codes possibles
		//(n(n+1))/2 < 2^16
		//on peut donc prendre n<=361


	return(EXIT_SUCCESS);
}
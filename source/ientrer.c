#include<stdio.h>
#include<stdlib.h>

#ifndef REPONSE_H
#include"reponse.h"
#endif

/** @fn intervale du reponse */
int irep(tabsi* tab, int min, int max) {
	int i=0;
	while(i< tab[0].size) {
		printf("tab = %d ",tab[0].t[i]);
		if(tab[0].t[i] < min || tab[0].t[i] > max) {
			fprintf(stderr,"Les nombres choisis doivent entre %d et %d\n",min,max);
			return -1;
		}
		i++;
	}
	return i;
}

/** @fn insertion et gestion de reponse */
tabsi* choixm(int nbrchoix,int min, int max) {
	char cchar[20];
	tabsi* tab;	// tableau convertier

	while(1) {
		printf("Entrer votre choix :\n");
		scanf("%s",cchar);
		
		tab = reptoint(cchar);

		if(tab[0].size > nbrchoix) {
			fprintf(stderr,"Choix très nombreux, nombre de choix maximale est %d\n",nbrchoix);
		}
		else if (irep(tab,min,max) > 0)
			return tab;

		fprintf(stderr,"Veuillez rééssayer s'il vous plaît\n");
	}
	exit (1);
}

void eto(char f[]) {
	printf("\n Aketo zaho amin'ny %s\n",f);
}

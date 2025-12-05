#define REPONSE_H

typedef struct tabsi {
	int *t;		//tableau
	int size;		// leur taille
} tabsi;

/** @fn insertion de choix et gestion de choix */
tabsi* choixm(int nc,int min,int max);

/** @fn convertire les reponses en tableau entier */
tabsi* reptoint(char chaine[]);

void eto(char f[]);

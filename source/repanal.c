#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#ifndef REPONSE_H
#include"reponse.h"
#endif

int trrepin(char* car, int* tab_int) {
	int i=0;
	char* temp;
	
	while (*(car + i) != ',') {
		i++;
	}
	
	temp=malloc(i+2);
	strncpy(temp,car,i);
	sscanf(temp,"%d",tab_int);
	free(temp);
	return i;
}

tabsi* reptoint(char* rep) {
	int rep_size=sizeof(rep);
	tabsi *trep = malloc(sizeof(tabsi));
	int trep_size;
	int virgule = 0; 	//nombre de virgule
	int i,j;

	//suppression de virgule à la fin
	while(*(rep + rep_size - 1) == ',') {
		*(rep + rep_size - 1) = '\0';
	}

	// comptuer de la virgule
	i=0;
	while(*(rep + i) != '\0') {
		if(*(rep +i) == ',') {
			virgule++;
		}
		i++;
	}
	trep[0].t = malloc((virgule)*sizeof(int));
	if(trep[0].t == NULL)
		exit (0);
	trep[0].size = virgule + 1;
	j=0;
	for(int i = 0; i < rep_size; i++) {
		i = i + trrepin(rep+i,&trep[0].t[j]);
		j++;
	}

	return trep;
}


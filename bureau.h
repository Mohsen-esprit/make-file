#ifndef BUREAU_H_INCLUDED
#define BUREAU_H_INCLUDED
#include<stdio.h>
#include <string.h>


typedef struct bureau_vote{
	int ID_bureau_vote;    
	char municipalite[30];
   	char ecole[30];
   	int num_salle;
   	int cap_bureau_vote;
   	int observateur;
}bureau_vote;

typedef struct vote{
	int id_election;
	int id_vote;
	int id_liste;
	int vote_blanc;
	Date date_v;
}vote;

typedef struct Date{
	int jour;
	int mois;
	int anne;
}Date;



int ajoute(char *,bureau_vote);

int supprimer(int ID_bureau_vote, char * );

int modifier(int id, bureau_vote nouv, char * );

bureau_vote chercher(char * filename, int id);

void taux (char *,float *tn,float *et);

int nbe (char *,int *id);

float TVB (char *) ;

#endif 

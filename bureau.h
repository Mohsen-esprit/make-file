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
   	int nb_observateur;
}bureau_vote;

typedef struct date{
	int jour;
	int mois;
	int anne;
}date;

typedef struct {
	int id ;
	char nom[20];
	char prenom[20];
	char genre[20];
	char municipalite[20];
	char nationalite[20];
	char role[20];
	char bureau_vote[20];
	int vote;
	date date_naissance;
}utilisateur;

	typedef struct {
	int id ;
	char nom[20];
	char prenom[20];
	char nationalite[20];
	char profession[20];
	char genre[20];
	date date_naissance;	
}observateur;






int ajoute(char *,bureau_vote);

int supprimer(int ID_bureau_vote, char * );

int modifier(int id, bureau_vote nouv, char * );

bureau_vote chercher(char *, int id);

void taux (char *,float *tn,float *et);

float TVB (char *) ;


#endif 

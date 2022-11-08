#ifndef BUREAU_H_INCLUDED
#define BUREAU_H_INCLUDED
#include<stdio.h>
#include <string.h>

typedef struct bureau_vote{
	int ID_bureau_vote;    
	char municipalite[30];
  	int ID_agent;
   	char ecole[30];
   	int num_salle;
   	int cap_bureau_vote;
   	int cap_observateur;
}bureau_vote;

int ajoute(char *,bureau_vote);

int supprimer(int ID_bureau_vote, char * );

int modifier(int id, bureau_vote nouv, char * );

bureau_vote chercher(char * filename, int id);

#endif 

/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */


#include "bureau.h"


int main () {
  
bureau_vote b_v;

int id,x;

bureau_vote b_v1={0000,"tunis",1111,"esprit",55,10,20};
bureau_vote b_v2={9999,"ghazela",3333,"fst",12,25,30};
bureau_vote b_v3;


x=ajoute("bureau.txt",b_v1);

if (x==1)
	printf("\n ajout de bureau avec succes");
	else printf("\n echec ajout");

printf("%d %s %d %s %d %d %d \n",b_v.ID_bureau_vote,b_v.municipalite,b_v.ID_agent,b_v.ecole,b_v.num_salle,b_v.cap_bureau_vote,b_v.cap_observateur);



	x=modifier( id, b_v2,"bureau.txt");

if (x==1)
	printf("\n modif de bureau avec succes");
	else printf("\n echec modif");


	x=supprimer(id,  "bureau.txt");

if (x==1)
	printf("\n supp de bureau avec succes");
	else printf("\n echec supp");


 	b_v1=chercher("bureau.txt",0000 );

if(b_v1.ID_bureau_vote==-1)
	printf("Observateur de id=%d n'existe pas",id);
 	else printf("Observateur de id=%d existe :\n",id);

  return 0;
}


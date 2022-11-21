#include "bureau.h"





void taux (char *filename,float *tn,float *et){
int n =0;
bureau_vote b_v;
int tr=0;
int obs_tn=0;
int obs_et=0;

FILE * f=fopen("bureau.txt", "r");

if (f!=NULL){
while(fscanf(f,"%d %s %s %d %d %d \n",&b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,&b_v.num_salle,&b_v.cap_bureau_vote,&b_v.observateur)!=EOF){

	if (b_v.observateur ==1){
	obs_tn++;
	n++;
	}else{
	obs_et++;
	n++;	
	}		
 }
*tn=(obs_tn/n)*100;
*et=(obs_et/n)*100;
}
  fclose(f);
}/*fel main utilisation bel &*/




float TVB (char * filename) {

	int n=0;
	float vb=0;

	vote v;	

	FILE * f=fopen(filename, "r");

if (f!=NULL){
while(fscanf(f,"%i %i %i %i %i %i %i \n",&v.id_election,&v.id_vote,&v.id_liste,&v.vote_blanc,&v.date_v.jour,&v.date_v.mois,&v.date_v.anne)!=EOF){
	
	if (v.id_vote!=-1)
	n++;
	if (v.vote_blanc==0)
	vb++;
	
	}
vb=(vb/(n+vb))*100;
	}
fclose(f);
return vb;
}

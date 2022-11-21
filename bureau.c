#include "bureau.h"


int ajoute( char * filename,bureau_vote b_v )
{

    FILE * f=fopen("bureau.txt", "a");
    if	(f!=NULL)
    {
        fprintf(f,"%d %s  %s %d %d %d \n",b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,b_v.num_salle,b_v.cap_bureau_vote,b_v.observateur);
        fclose(f);
        return 1;
    }
    else return 0;
}



int modifier(int id, bureau_vote nouv, char * filename)
{
	bureau_vote b_v;

    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("bureau1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while	(fscanf(f,"%d %s  %s %d %d %d \n",&b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,&b_v.num_salle,&b_v.cap_bureau_vote,&b_v.observateur)!=EOF)
{
if(b_v.ID_bureau_vote!=id)
        fprintf(f2,"%d %s  %s %d %d %d \n",b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,b_v.num_salle,b_v.cap_bureau_vote,b_v.observateur);
else

  fprintf(f2,"%d %s  %s %d %d %d \n",nouv.ID_bureau_vote, nouv.municipalite, nouv.ecole,nouv.num_salle,nouv.cap_bureau_vote,nouv.observateur);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("bureau1.txt", filename);
        return 1;
    }
}


 
int supprimer(int id, char * filename)
{
	int tr=0;
	bureau_vote b_v;
    FILE * f=fopen("bureau.txt", "r");
    FILE * f2 =fopen("bureau1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while	(fscanf(f,"%d %s  %s %d %d %d \n",&b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,&b_v.num_salle,&b_v.cap_bureau_vote,&b_v.observateur)!=EOF)
{
if	(b_v.ID_bureau_vote!=id)
        fprintf(f2,"%d %s  %s %d %d %d \n",b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,b_v.num_salle,b_v.cap_bureau_vote,b_v.observateur);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("bureau1.txt", filename);
        return 1;	
    }
}



bureau_vote chercher(char * filename, int id){
    bureau_vote	b_v;
    int	tr=0;
    FILE * f=fopen("bureau.txt", "r");
    if(f!=NULL)
    {
while(fscanf(f,"%d %s  %s %d %d %d \n",&b_v.ID_bureau_vote, b_v.municipalite, b_v.ecole,&b_v.num_salle,&b_v.cap_bureau_vote,&b_v.observateur)!=EOF)
        {
            if(b_v.ID_bureau_vote== id)
               { tr=1;}
        }
    }
    fclose(f);
    if(tr==0)
      b_v.ID_bureau_vote=-1;
    return b_v;
}







void taux (char *filename,float *tn,float *et){
	int	n=0;
	int	x=0;
	char	ch1[20];
	char	ch2[20];
	float	obs_tn=0;
	float	obs_et=0;
	observateur  ob;

FILE * f=fopen("observateur.txt", "r");

if (f!=NULL){
while(fscanf(f,"%d %s %s %s %s %s %d %d %d \n",&ob.id,ob.nom,ob.prenom,ob.nationalite,ob.profession,ob.genre,&ob.date_naissance.jour,&ob.date_naissance.mois,&ob.date_naissance.anne)!=EOF){

	n=n+1;
	strcpy(ch1,ob.nationalite);
	strcpy(ch2,"tunis");
	x=strcmp(ch1,ch2);
	if (x==0)
		obs_tn=obs_tn+1;
	else
		obs_et=obs_et+1;		
				
 }
*tn=(obs_tn/n)*100;
*et=(obs_et/n)*100;
}
  fclose(f);

}




float TVB (char * filename) {

	int 	n=0;
	float 	vb=0;
	float	taux_vb;

	utilisateur	u;	

	FILE * f=fopen("utilisateur.txt", "r");

if (f!=NULL){
while(fscanf(f,"%i %s %s %s %s %s %s %s %i %i %i %i \n",&u.id,u.nom,u.prenom,u.genre,u.municipalite,u.nationalite,u.role,u.bureau_vote,&u.vote,&u.date_naissance.jour,&u.date_naissance.mois,&u.date_naissance.anne)!=EOF){
	n=n+1;
	if(u.vote==0)
	vb=vb+1;
	}
taux_vb=(vb/n)*100;
	}
fclose(f);
return taux_vb;
}










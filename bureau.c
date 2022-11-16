#include "bureau.h"
/*/////////////////////////////////////*/

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
/*/////////////////////////////////////////*/

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
/*///////////////////////////////////////////*/
 
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
/*//////////////////////////////////////////////////*/
bureau_vote chercher(char * filename, int id){
    bureau_vote b_v;
    int tr=0;
    FILE * f=fopen(filename, "r");
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
/*//////////////////////////////////////////////*/









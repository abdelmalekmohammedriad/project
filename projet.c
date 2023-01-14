#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>
struct livre {
    int  Code;
    char Titre[50];
    int  NA;
    char Auteur[10][30];
    char Date[10];
    char LaMaison[50];
};
struct livre LIV[];
int n=0;




void AJOUTER(){
    int i,j,a;
    printf("donner le nombre de livre que vous voulez ajouter: ");
        scanf("%d",& a);

    for(i=0; i<a; i++){
                        system("cls");
                        printf("Donner le Code ISBN: ");
                        scanf("%d",&LIV[i+n].Code);
                        printf("\nDonner le Titre de livre: ");
                        scanf("%s",&LIV[i+n].Titre);
                        printf("\nDonner le nombre des autures: ");
                        scanf("%d",&LIV[i+n].NA);
    if(LIV[i+n].NA==1){
                printf("\nDonner le Nom et le Prenom d'auteur: ");
                scanf("%s",&LIV[i+n].Auteur[0]);
    }
    else{
        for(j=0; j < LIV[i+n].NA; j++){
                        printf("\nDonner le Nom et le Prenom de l'auteur(%d): ",j+1);
                        scanf("%s",&LIV[i+n].Auteur[j]);
        }
    }
    printf("\nDonner la Date de publication comme ca: dd/mm/yyyy \n");
    scanf("%s",&LIV[i+n].Date);
    printf("\nDonner la maison de publication: ");
    scanf("%s",&LIV[i+n].LaMaison);
    }
    n=n+a;
}







void MODIFIER(){
int choix,nc,j,k,y,id,c,o;
char nt[50],p,na[10][30],nm[50],nd[10];
do{

    printf("\ndonner le ID de livre: ");
    scanf("%d",&id);
    printf("n=%d id=%d",n,id);
}while(id>n);
system("cls");
printf("1:pour modifier une information\n2:pour modifier toutes les informations ");
scanf("\n%d",&y);
system("cls");
        if (y==1){
            printf ("Choisissez ce que vous voulez modifier: ");
            printf("\n1:LE CODE ISBN\n2:LE TITRE\n3:L'AUTEURE\n4:LA DATE DE PUBLICATION\n5:LA MAISON DE PUBLICATION\n");
            scanf("%d",&choix);
switch (choix){
    do{
        case 1:printf("le Code ISBN est: %d",LIV[id-1].Code);

do{
    printf("\ntu es sure de vous voullez changer le code ISBN?:\nO: pour oui\nN:pour non\n");
    scanf("\n %c",&p);
}while(p!='o'&&p!='O'&&p!='n'&&p!='N');


system("cls");
do  {if(p=='o'||p=='O')
    {
        printf("donner le nouveau Code ISBN: ");
        scanf("%d",&nc);
        LIV[id-1].Code=nc;}
}while(p=='o'&&p=='O'&&p=='n'&&p=='N');
break;

case 2:
    printf("le titre est: %s",LIV[id-1].Titre);
    printf("\ntu es sure de vous voullez changer le Titre?:\nO: pour oui\nN:pour non\n");
    scanf("\n%s",&p);
    system("cls");
   do{ if(p=='o'||p=='O'){
                        printf("donner le nouveau titre: ");
                        scanf("%s",&nt);
                        strcpy(LIV[id-1].Titre,nt);
    }
    }while(p=='o'&&p=='O'&&p=='n'&&p=='N');
break;
case 3:

        printf("l'auteur(s) de livre est(sont): ");
        for(j=0; j < LIV[id-1].NA; j++){
            printf("%s",LIV[id-1].Auteur[j]);}
            printf("\ntu es sure de vous voullez changer L'AUTEUR(S)?:\nO: pour oui\nN:pour non\n");
            scanf("%s",&p);
            system("cls");
do {if(p=='o'||p=='O'){
                       printf("\nDonner le nombre des autures: ");
                       scanf("%d",&LIV[id-1].NA);
    if(LIV[id-1].NA==1){
                printf("\nDonner le Nom et le Prenom d'auteur: ");
                scanf("%s",&LIV[id-1].Auteur[0]);
    }
    else{
         for(j=0; j < LIV[id-n].NA; j++){
                        printf("\nDonner le Nom et le Prenom de l'auteur(%d): ",j+1);
                        scanf("%s",&LIV[id-1].Auteur[j]);
         }
    }
    strcpy(LIV[id-1].Auteur[j] , na[j]);
    }
}while(p=='o'&&p=='O'&&p=='n'&&p=='N');

break;
 case 4:

     printf("LA date de publicaction est: %s",LIV[id-1].Date);
     printf("\ntu es sure de vous voullez changer La date?:\nO: pour oui\nN:pour non\n");
     scanf("%s",&p);
     system("cls");
    do{  if(p=='o'||p=='O'){
                printf("donner la nouvelle date: ");
                scanf(" %s",&nd);
                strcpy(LIV[id-1].Date ,nd);
         }
    }while(p=='o'&&p=='O'&&p=='n'&&p=='N');
break;
 case 5:
            printf("la maison de publication est: %s",LIV[id-1].LaMaison);
            printf("\ntu es sure de vous voullez changer la maison de publication?:\nO: pour oui\nN:pour non\n");
            scanf(" %c",&p);
            system("cls");
          do{ if(p=='o'||p=='O'){
                    printf("donner la nouvelle maison de publication: ");
                    scanf(" %s",&nm);
                    strcpy(LIV[id-1].LaMaison ,nm);
          }
          }while(p=='o'&&p=='O'&&p=='n'&&p=='N');
break;}while(choix==1 && choix==2 && choix==3 && choix==4 && choix==5);
}}


if(y==2){
       do{
    printf("tu es sure que vous voullez changer tous les informations:\nO: pour oui\nN:pour non\n");
    scanf("\n %c",&p);
}while(p!='o'&&p!='O'&&p!='n'&&p!='N');
system("cls");
   do{
        if(p=='o'||p=='O'){
            printf("Donner le novaux Code ISBN: ");
            scanf("%d",&nc);
            LIV[id-1].Code=nc;

            printf("\nDonner le novaux Titre de livre: ");
            scanf("%s",&nt);
            strcpy(LIV[id-1].Titre,nt);
                    printf("\nDonner le nombre des autures: ");
                    scanf("%d",&LIV[id-1].NA);
                    for(j=0; j < LIV[id-1].NA; j++){
                                            if(LIV[id-1].NA==1){
                                                printf("\nDonner le Nom et le Prenom d'auteur: ");
                                                scanf("%s",&LIV[id-1].Auteur[0]);
                                            }
                                            else{
                                                printf("\nDonner le Nom et le Prenom de l'auteur(%d): ",j+1);
                                                scanf("%s",&LIV[id-1].Auteur[j]);
                                            }
                                            strcpy(na[j], LIV[id-1].Auteur[j]);
                    }
            printf("\nDonner la nouvelle Date de publication comme ca: dd/mm/yyyy \n");
            scanf("%s",&nd);
            strcpy(LIV[id-1].Date, nd);
            printf("\nDonner la nouvelle maison de publication: ");
            scanf("%s",&nm);
            strcpy(LIV[id-1].LaMaison, nm);
            }

}while(p=='o'&&p=='O'&&p=='n'&&p=='N');
}}







void SUPRIMER(){
        int position,i;
        int ls,j;
        char at[50];
        do{
        printf(" le nombre de livres est: %d\n ",n);
        printf("combien livre tu veux suprimer: ");
        scanf("%d", & ls);
        system("cls");
        }while(ls>n);
            if(ls>n){
                     printf("Suppression impossible.\n");
            }
            if(ls<n){
                    do{
                        for(j=0 ;j < ls ;j++){
                                        printf("\nEntrez le ID de livre (%d) que vous voullez supprimer : ",j+1);
                                        scanf("%d", &position);}
                        }while(position>n);
                if (position > n ){
                        printf("\nSuppression impossible.\n");
                }
                if(position < n){
                        for (i = position-1 ; i < n ; i++){
                            LIV[i].Code = LIV[i+1].Code;
                            strcpy(at, LIV[i].Titre);
                            strcpy(LIV[i].Titre , LIV[i+1].Titre);
                            strcpy(LIV[i].Auteur[j] , LIV[i+1].Auteur[j]);
                            strcpy(LIV[i].Date , LIV[i+1].Date);
                            strcpy(LIV[i].LaMaison , LIV[i+1].LaMaison);
                         }
                         system("cls");
                         printf("\nle livre %s est suprimmer avec succes .", at);




                }
            }n=n-ls;

            }




void RECHERCHER() {
  char st[50];
printf("\nEntrez le Titre que vous voullez rechercher : ");
scanf("%s", & st);
  int i,j;
  bool b=1;
  for (i = 0; i < n; i++) {
  if (strcmp(LIV[i].Titre, st) == 0) {
        b=0;
          printf("livre est trouver!\n");
          printf("ISBN: %d\n",     LIV[i].Code);
          printf("Titre: %s\n",    LIV[i].Titre);
          for(j=0 ; j < LIV[i].NA ;j++ ){
          printf("Auteur (%d): %s\n",j+1, LIV[i].Auteur[j]);
          }
          printf("Date: %s\n"    , LIV[i].Date);
          printf("LaMaison: %s\n", LIV[i].LaMaison);
          }
  }
  if(b)
  printf("ce titre ne existe pas!\n");
}



void AFFICHIER(){
int i,j;
  for (i = 0; i <n ; i++) {
          printf("le livre numero(%d): \n", i+1);
          printf("ISBN: %d\n", LIV[i].Code);
          printf("Titre: %s\n", LIV[i].Titre);
          for(j=0 ; j < LIV[i].NA ;j++ ){
          printf("Auteur (%d): %s\n",j+1, LIV[i].Auteur[j]);
          }
          printf("Date: %s \n", LIV[i].Date);
          printf("La Maison: %s\n", LIV[i].LaMaison);
          printf("\n");}}







int main(){

    int choix;bool B;
    char c,C;
   printf("\t\t.......................bienvenue dans notre programme de bibliotheque...................\n");
   printf("\n\n\nAppuyez sur n'importe quelle cle pour continuer:\n");
   getchar();
   system("cls");
    do{
            B=1;
        printf("le nombre de livre :%d\n",n);
        printf("1:AJOUTER\n2:RECHERCHER\n3:SUPRIMER\n4:MODIFIER\n5:AFFICHIER\n6:EXIT");
        printf("\nQuel procede souhaitez vous choisir ?\n");
        scanf("%d",& choix);
        system("cls");
        switch (choix){
            case 1:AJOUTER();
            break;
            case 2:RECHERCHER();
            break;
            case 3:SUPRIMER();
            break;
            case 4:MODIFIER();
            break;
            case 5:AFFICHIER();
            break;
            case 6:
                printf("tu es sur de vous voullez exite le programme: \n");
                printf("o:pour exit le programme.\n");
                printf("n:pour revenir a menu principale. \n ");
                scanf(" %c",&C);
                if(C=='o'||C=='O'){
                           printf("Exit le programme....\n");
                           exit(0);}
                else{
                    B=0;
                    c='o';

                }

            break;
        }
         if(B){
        printf("\nvoulez vous continuer vers menu principale ?\n");
        scanf(" %c",&c);}
        system("cls");
        }while(c=='o'||c=='O');
    }


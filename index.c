#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char create(char* cin , char* nom , char* prenom , long int montant );
void titel_bank();
void meun();


typedef struct {
   char  cin[15];
   char  nom[15];
   char  prenom[15];
   long int montant; 
}user;

int main() {

    char cin[15] , nom[15], prenom[15]  ;
    long int montant;
    int menu ;
    
    returns:
    system("cls");
    titel_bank();
    printf("\n");

    do
    {
        printf("\n\n");
        printf("donnez choix : ");
        scanf("%d", &menu);

        if (menu>8 || menu < 1)
        {
            printf("votre choix doit etre compris entre ( 1 et 8 )  : ");
            scanf("%d", &menu);
        }
        

    } while (menu > 8 || menu < 1);
    

    switch (menu)
    {
    case 1:
        system("cls");
        printf(" ********************************* 1.Creer un user *********************************\n");
        printf("ecrivez votre nom :");
        scanf("%s", &nom);

        printf("ecrivez votre prenom :");
        scanf("%s", &prenom);

        printf("ecrivez votre cin :");
        scanf("%s", &cin);

        printf("ecrivez votre montant :");
        scanf("%d", &montant);
        create(cin,nom,prenom,montant);
        goto returns ;
        break;
    
    default:
        printf("error !! ");
        break;
    }

    return 0 ;
}




void titel_bank(){
    printf("===================================================================\n");
    printf("==========================    bank     =============================\n");
    printf("===================================================================\n");
};

void meun(){
    printf("Bonjour qu'est-ce que vous voulez : \n");
    printf("1.Creer un compte \n");
    printf("2.a jouter plusieures acc  \n");
    printf("3.opertions  \n");
    printf("1.affichage  \n");
    printf("1.pedilisation  \n");
    printf("1.quitter application  \n");
}

char create(char cin[15] , char nom[15] , char prenom[15] , long int montant){
    FILE* fp ;
    fp = fopen("data.txt", "a");
    fprintf(fp,"%s %s %s %d \n",cin,nom,prenom,montant);
    fclose(fp);
    return 0 ;
}
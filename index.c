#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char create(char* cin , char* nom , char* prenom , long int montant );
void titel_bank();

int main() {

    char cin[15] , nom[15], prenom[15]  ;
    long int montant;
    int menu ;
    
    returns:
    system("cls");
    titel_bank();
    printf("\n");
    printf("Bonjour qu'est-ce que vous voulez : \n");
    printf("1.Creer un compte :");
    printf("2.a jouter plusieures acc :");
    printf("3.opertions :");
    printf("1.affichage :");
    printf("1.pedilisation :");
    printf("1.quitter application :");
    scanf("%d", &menu);

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


char create(char cin[15] , char nom[15] , char prenom[15] , long int montant){
    FILE* fp ;
    fp = fopen("data.txt", "a");
    fprintf(fp,"%s %s %s %d \n",cin,nom,prenom,montant);
    fclose(fp);
    return 0 ;
}
/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :   3                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :    Chiffrement de message                                       *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :  Benjamin FOUILHAC                                           *
*                                                                             *
*  Nom-prénom2 :  Amine EL KADDOURI                                           *
*                                                                             *
*  Nom-prénom3 :  Damien MOREL                                                *
*                                                                             *
*  Nom-prénom4 :  Hasina RAZAFIMANDIMBY                                       *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : affichage.c                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>

#include "affichage.h"

void presentation() {
    // Affiche un message à l'utilisateur lui demandant s'il -
    //souhaite quiter la procédure de cryptage, ou s'il souhaite continuer
    printf("\n                                    ALGORITHMES DE CRYPTAGE                                            \n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("| Annuler la procédure ou crypter/décrypter  votre message  (0,1):                                      |\n");
    printf("|   0. Quitter                                                                                          |\n");
    printf("|   1. Cesar                                                                                            |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf(" >>> ");
}

void choixCrypt() {
    // Affichage d'un message demandant à l'utilisateur s'il souhaite encoder ou décoder un message
    printf("\n                                     ENCODAGE OU DECODAGE                                              \n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("| Souhaitez vous encoder ou decoder votre message ( 1 ou 2 ) :                                           |\n");
    printf("|   1. Encoder                                                                                           |\n");
    printf("|   2. Décoder                                                                                           |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf(" >>> ");
}

void affichage(char chaine[], int i) {
    if (i == 0) {
        // Affiche un message d'erreur si la chaîne contient des caractères non alphanumériques
        printf("\nVeuillez utiliser des caractères alphanumériques !\n");
    } else if (i == 1) {
        // Affiche la chaîne codée
        printf("\n----------------------------------\n");
        printf("\nCHAINE CODEE   : %s \n", chaine);
        printf("\n----------------------------------\n");
    } else if (i == 2) {
        // Affiche la chaîne décodée
        printf("\n----------------------------------\n");
        printf("\nCHAINE DECODEE : %s \n", chaine);
        printf("\n----------------------------------\n");
    } else if (i == 10) {
        // Demande à l'utilisateur d'entrer la chaîne à coder
        printf("\nVeuillez entrer la chaine à encoder : \n >>> ");
        fgets(chaine, 100, stdin);
        chaine[strlen(chaine) - 1] = '\0';
    } else if (i == 11) {
        // Demande à l'utilisateur d'entrer la chaîne à décoder
        printf("\nVeuillez entrer la chaine à décoder : \n >>> ");
        fgets(chaine, 100, stdin);
        chaine[strlen(chaine) - 1] = '\0';
    }
}

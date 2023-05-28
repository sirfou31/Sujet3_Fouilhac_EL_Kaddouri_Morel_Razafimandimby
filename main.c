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
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>

#include "chiffrage.h"
#include "affichage.h"
#include "verif.h"

void main() {

    // Déclaration des différents variables
    char ch[200];                   // Chaine de caractères puvant contenir 200 caractères pour le message
    char option[10];                // Option choisie (encodage ou décodage)
    char yn[10];                    // Réponse oui/non
    int cle;                        // Clé de chiffrement
    char cleChaine[100];            // Clé de chiffrement sous forme de chaîne de caractères
    char choix[50];                 // Choix de l'algorithme
    char sortie[50];                // Sortie de la boucle principale

    FILE* fichier;                  // Correspond aux fichiers de sortie
    fichier = fopen("CompteRendu.txt", "w");

    // Boucle principale pour le menu
    while (strcmp(choix, "0") != 0) {
        presentation();
        fgets(choix, 10, stdin);
        choix[strlen(choix) - 1] = '\0';

        // Cas d'utilisation de l'algorithme César
        if (strcmp(choix, "1") == 0) {
            choixCrypt();
            fgets(option, 10, stdin);
            option[strlen(option) - 1] = '\0';

            // Encoder une chaîne
            if (strcmp(option, "1") == 0) {
                affichage(ch, 10);

                // Vérification de la validité de la chaîne
                while (verifAlpha(ch) == false) {
                    affichage(ch, 0);
                    affichage(ch, 10);
                    verifAlpha(ch);
                }

                printf("\nSaisir la clé : \n >>> ");
                scanf("%d", &cle);

                // Chiffrement de la chaîne
                chiffrage(ch, cle);
                fprintf(fichier, "Chiffrement César : %s\n", ch);
                affichage(ch, 1);

                printf("\nVoulez-vous le déchiffrer (y/n) ?\n >>> ");
                scanf("%s", yn);

                // Déchiffrement de la chaîne si demandé par l'utilisateur
                if (strcmp(yn, "y") == 0) {
                    dechiffrage(ch, cle);
                    affichage(ch, 2);
                    fprintf(fichier, "Déchiffrement César : %s\n", ch);
                }
            }

            // Décoder une chaîne
            else if (strcmp(option, "2") == 0) {
                affichage(ch, 11);
                fgets(ch, 100, stdin);
                ch[strlen(ch) - 1] = '\0';

                // Vérification de la validité de la chaîne
                while (verifAlpha(ch) == false) {
                    affichage(ch, 0);
                    affichage(ch, 11);
                    verifAlpha(ch);
                }

                printf("\nSaisir la clé : \n >>> ");
                scanf("%d", &cle);

                // Déchiffrement de la chaîne
                dechiffrage(ch, cle);
                fprintf(fichier, "Déchiffrement César : %s \n", ch);
                affichage(ch, 2);
            }
        }

        // Sortie du programme si 0 est choisi
        if (strcmp(choix, "0") == 0) {
            fclose(fichier);
            break;
        }
    }
}

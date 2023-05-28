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
*  Nom du fichier : chiffrage.c                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#include "chiffrage.h"

void chiffrage(char *chaine, int cleChiffrage) {
    // Permet d'ignorer les espaces
    for (int i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == ' ') {
            i++; 
        }

        // Calcul de la nouvelle position du caractère chiffré
        char newposmin = (chaine[i] - 'a') + 1;
        char newposmaj = (chaine[i] - 'A') + 1;
        char newposnum = (chaine[i] - '0') + 1;

        if ((newposmin + cleChiffrage) > 26) {
            // Si le caractère est une lettre minuscule et dépasse 'z', on le passe à 'a'
            chaine[i] = ((newposmin + cleChiffrage) - 26) + 'a' - 1;
        } else if ((newposmaj + cleChiffrage) > 26 && chaine[i] < 'a') {
            // Si le caractère est une lettre majuscule et dépasse 'Z', on le passe à 'A'
            chaine[i] = ((newposmaj + cleChiffrage) - 26) + 'A' - 1;
        } else if ((newposnum + cleChiffrage) > 10 && chaine[i] < 'A') {
            // Si le caractère est un chiffre et dépasse '9', on le passe à '0'
            chaine[i] = ((newposnum + cleChiffrage) - 10) + '0' - 1;
        } else {
            // Ajoute le décalage à la position actuelle du caractère
            chaine[i] = chaine[i] + cleChiffrage;
        }
    }
}

void dechiffrage(char *chaine, int cleChiffrage) {
    // Permet d'ignorer les espaces
    for (int i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == ' ') {
            i++; 
        }
        char temp = chaine[i] - cleChiffrage;
        if (temp < 'a' && chaine[i] > 'Z') {
            // Si le caractère est une lettre minuscule et la déchiffrement dépasse 'z', on le passe à 'a'
            char res = 'a' - temp;
            chaine[i] = 'z' - res + 1;
        } else if (temp < 'A' && chaine[i] > '9') {
            // Si le caractère est une lettre majuscule et la déchiffrement dépasse 'Z', on le passe à 'A'
            char res = 'A' - temp;
            chaine[i] = 'Z' - res + 1;
        } else if (temp < '0') {
            // Si le caractère est un chiffre et la déchiffrement dépasse '0', on le passe à '9'
            char res = '0' - temp;
            chaine[i] = '9' - res + 1;
        } else {
            // Soustrait le décalage à la position actuelle du caractère
            chaine[i] = chaine[i] - cleChiffrage;
        }
    }
}

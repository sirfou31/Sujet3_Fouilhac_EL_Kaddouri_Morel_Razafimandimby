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
*  Nom du fichier : chiffrage.h                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#include "verif.h"

// Fonction de vérification si tous les caractères de la chaîne sont alphabétiques
bool verifAlpha(char chaine[]) {
    for (int i = 0; i < strlen(chaine); i++) {
        // Permet d'ignorer les espaces
        if (chaine[i] == ' ') {
            i++;  
        }
        // Permet d'ignorer les chiffres
        else if (isdigit(chaine[i]) != 0) {
            i++;  
        }
        // Retourner faux si un caractère non alphabétique est trouvé
        else if (isalpha(chaine[i]) == 0) {
            return false;  
        }
    } 
    // Retourner vrai si tous les caractères sont alphabétiques
    return true; 
}

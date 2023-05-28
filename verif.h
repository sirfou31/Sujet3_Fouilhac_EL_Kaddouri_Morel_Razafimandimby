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
*  Nom du fichier : verif.h                                                   *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*  Prend en entrée une chaine de caractère 
    Renvoie TRUE si la chaine est en alphanumérique, FALSE sinon */
bool verifAlpha (char chaine []);

/*  Prend en entrée une chaine de caractère
    Converti les accents de la chaîne en chaine sans accent
    et renvoi en sortie la chaîne sans accent */
char * conversionAccents (char * chaine []);

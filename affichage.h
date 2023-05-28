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
*  Nom du fichier : affichage.h                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>

/*  Entrée : chaine (chaine de caractère à afficher après décodage ou encodage), int (valeur permettant de choisir ce qu'on doit afficher)
    Affiche le message décoder ou encoder par l'algorithme de césar
*/
void affichage (char chaine[],int i);

/* Affiche graphiquement le message de choix entre annuler la procédure ou bien continuer la procédure
*/
void presentation();

/* Affiche graphiquement le message de choix : encodage ou decodage
*/
void choixCrypt();

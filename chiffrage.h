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

/* Fonction de chiffrement
 * Cette fonction chiffre une chaîne de caractères à l'aide de la méthode de César.
 * En entrées: 
 *   - chaine: la chaîne à chiffrer (modifiée directement dans la fonction)
 *   - cleChiffrage: la clé de chiffrement (décalage)
 */
void chiffrage(char *chaine, int cleChiffrage);


/* Fonction de déchiffrement
 * Cette fonction déchiffre une chaîne de caractères chiffrée à l'aide de la méthode de César.
 *En entrées:
 *   - chaine: la chaîne chiffrée (modifiée directement dans la fonction)
 *   - cleChiffrage: la clé de chiffrement (décalage) utilisée pour le chiffrement initial
 */
void dechiffrage(char *chaine, int cleChiffrage);

<img width="210" height="160" align="left" style="float: left; margin: 0 10px 0 0;" alt="IUT" src=""https://www.google.com/url?sa=i&url=https%3A%2F%2Fiut.univ-tlse3.fr%2Finformatique&psig=AOvVaw2ImJB_fJ5-wDgyqVcjr3YI&ust=1685387688345000&source=images&cd=vfe&ved=0CBEQjRxqFwoTCPit4MbcmP8CFQAAAAAdAAAAABAE""> 


Application codée en C permetant de codée et de décoder un message
---
<div id="Som"/>
  
## Sommaire

* [Objectif](#Obj)
* [Démarrage](#Démarrage)
* [Documentation](#Documentation)
  * [Chiffrage](#Chiff)
  * [Affichage](#Aff)
  * [Verif](#Verif)
  * [Main](#main)
* [Equipe](#Equipe)


<div id="Obj"/>
  
## Objectif

  Afin de créer une application de protection de message confidentiels, nous avons créé un programme permettant de chiffrer des messages. L'image ci-dessous montre les différentes étapes nécessaires pour chiffrer ou déchiffrer un message et afficher le résultat.
<img src="https://media.discordapp.net/attachments/950656324377640960/963814296414990366/unknown.png">

<div id='Démarrage'/>

## Démarrage

Pour lancer le programme il faut de télécharger le projet et dans un terminal Linux taper la commande : ``make all && ./main``.

<div id='Concu'/>

<div id='Documentation'/>

<div id="Chiff"/>

### Chiffrage

```C
/* Chiffre une chaîne en utilisant la méthode de César.
Prend en entrées: une chaine: la chaîne à chiffrer
et une cleChiffrage: la clé de chiffrement à utiliser */
void chiffrage(char *chaine, int cleChiffrage);


/* Déchiffre un message en utilisant une clé de chiffrement.
Prend en entrées: une chaine: le message chiffre une cleChiffrage: la clé de chiffrement utilisée */
void dechiffrage(char *chaine, int cleChiffrade);

```

<div id="Aff"/>

### Affichage

```C
/* Affiche le message décodé ou encodé par l'algorithme de César.
Prend en Entrées: une chaine: la chaîne de caractères à afficher après décodage ou encodage et i: valeur permettant de choisir ce qu'on doit afficher */
void affichage (char chaine[],int i);

/* Affiche le message de choix de la technique de cryptage chois par l'utilisateur
*/
void presentation();

/* Affiche le message pour que l'utilisateur choisi s'il souhaite encodée ou decodée le message
*/
void choixCrypt();
```

<div id="Verif"/>

### Verif

```C

/* Vérifie si une chaîne de caractères est alphanumérique.
Elle prend en Entrée une chaine: la chaîne de caractères à vérifier
et elle renvoie: TRUE si la chaîne est alphanumérique
ou FALSE sinon */
bool verifAlpha (char chaine []);

/* Convertit les accents d'une chaîne de caractères en une chaîne sans accent.
Pren en entrée une chaine: la chaîne de caractères à convertir puis renvoie: la chaîne convertie sans accents */
char * conversionAccents (char * chaine []);
```

<div id="main"/>

### main

```C
/* Programme principal contenant les  différentes fonnctions à appeler
*/
void main();
```

<div id='Equipe'/>

## Equipe
L'équipe est constituée de :
  - [Benjamin FOUILHAC]
  - [Amine EL KADDOURI]
  - [Damien MOREL]
  - [Hasina RAZAFIMANDIMBY]

Lien du GitHub:(https://github.com/sirfou31/Sujet3_Fouilhac_EL_Kaddouri_Morel_Razafimandimby
 Etudiants en informatique à l'IUT Paul Sabatier de Toulouse

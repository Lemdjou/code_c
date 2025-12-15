#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include "SampleLib.c"


// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Définition d'une fonction d'élèvation à une puissance données.
int power( int value, unsigned int pow );

// Exercice1: Definition d'une procedure qui affiche "Bonjour"
void bonjour();

// exercice2 : invertion d'un chiffre
int invertion( int value);

//exercice3 : produit de 2 nombres r�els
float produit(float value1, float value2);

//exercice4 : d�terminer la parit� d'un nombre
int parite(int value);

//exercice5 : comparaison de deux entiers
int comparaison(int value1, int value2);

//exercice6 : classement de trois entiers par ordre croissant

void classement(int value1, int value2, int value3);

//exercice16 : utiliser un pointeur pour permuter le contenu de deux variables char
void permutation(char *value1, char *value2);

//exercice17 : une fonction de prototypes qui prend en parametres deux entiers et renvoie leur somme.
	
int somme( int value1, int value2);
 //exercice TD : enseignant
typedef struct{
	char code[20];
    char nom[30];
    char prenom[50];
    char grade[10];
    char sexe;
} Enseignant;
 void creation_enseignants( Enseignant *v, int n);
#endif

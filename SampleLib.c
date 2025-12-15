#include "SampleLib.h"


// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
	unsigned int result = 1;
	while ( value > 1 ) {
		result *= value;
		value --;
	}
	return result;
}

// Définition d'une fonction d'élèvation à une puissance données.
int power( int value, unsigned int pow ) {
	if ( pow == 0 ) return 1;
	if ( pow == 1 ) return value;
	int accumulator = 1;
	while( pow > 0 ) {
		accumulator *= value;
		pow--;
	}
	return accumulator;
}

//exercice1 : Definiton d'une fonction qui affiche "Bonjour"
void bonjour() {
	printf("\nBonjour\n");

}

// exercice2 : d�finition d'une fonction d'inversion d'un nombre de 3 chiffres

int invertion(int nombre ) {
int inverse;
inverse = ( nombre % 10 ) * 100 + (( nombre / 10) % 10) * 10 + ( nombre / 100);

return inverse;
}
//exercice3 : produit de 2 nombres r�els

float produit(float value1, float value2){
	return value1 * value2;
}
//exercice4 : d�terminer la parit� d'un nombre

int parite(int value){
	if(value%2==0)
	return 1;
	else 
	return 0;
	}
	
	//exercice5 : comparaison de deux entiers
	
int comparaison(int value1, int value2){
	if(value1==value2)
	return 1;
	else if (value1>=value2)
	return 0;	
}	

	//exercice6 : classement de trois entiers par ordre croissant
	
void classement(int value1, int value2, int value3)
{
	int temp;
	if(value1>value2){
		temp =value1 ;
		value1 = value2;
		value2 = temp;
	}
	if(value1>value3){
	
		temp = value1;
		value1 = value3;
		value3 = temp;
	}
	if(value2>value3){
	
		temp = value2;
		value2 = value3;
		value3 = temp;
		
	}
printf("\n on a par ordre croissant: %d< %d< %d",value1, value2, value3);
}


//exercice16 : utiliser un pointeur pour permuter le contenu de deux variables char
void permutation (char *value1, char *value2){
	char temp;
    temp = *value1;
	*value1 = *value2;
	*value2 = temp;
	
}

//exercice17 : une fonction de prototypes qui prend en parametres deux entiers et renvoie leur somme.
	
int somme( int value1, int value2){
	return value1 + value2 ;
}

//exercice TD : enseignant
void creation_enseignants(Enseignant *v, int n){
	int i;
	for (i=0; i<n; i++){
	printf("enregistrement de l'enseignant:\n");
	printf("code\n");
	scanf("%s", v[i].code);
	printf("nom\n");
	scanf("%s", v[i].nom);	
	printf("prenom\n");
	scanf("%s", v[i].prenom);
	printf("grade\n");
	scanf("%s", v[i].grade);
	printf("sexe\n");
	scanf("%s", v[i].sexe);
	}
}	

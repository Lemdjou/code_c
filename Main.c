#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"


// D�finition des fonctions pour chaque exercice


    	// premi�re exp�rience 
	int result = power( 2, 3 );
	printf( "2^3 == %d\n", result );
	result = fact( 6 );
	printf( "6! == %d\n", result );
	


    	// exercice 1
	bonjour();




    	//exercice 2
	int nombre, inverse;
	
	printf("\nentrer un nombre entier a trois chiffres : \n" );
	scanf("%d", &nombre);
	
	if(nombre<100 || nombre>999)
		printf("\nla prochaine fois entrer un nombre a trois chiffres");
	else{
		inverse=invertion(nombre);
		printf("\nle nombre inverse  est : %d", inverse);	
	} 


    //exercice 3 : produit de 2 nombres r�els
	float x,y,prod;
	
	printf("\nentrer deux nombres reels: \n");
	scanf("%f %f",&x, &y);
	
	prod=produit(x,y);
	printf("\n%.3f * %.3f = %.3f", x,y,prod);
	
	

    	//exercice4 : 
	
	int a; 
	printf("\nentrer un nombre: \n");
	scanf ("%d", &a);
	
	if (parite(a)==1)
	printf("\nle nombre entre est : pair");
	
	else{
		printf("\nle nombre entre est :impair");
	
	}



    	//exercice5 : 
	
	int f,g;
	printf("\nentrer deux nombres entiers:\n");
	scanf("%d %d", &f,&g);
	if(comparaison(f,g)==1)
	printf("f = g ", f,g);
	else if(comparaison(f,g)==0)
	printf("f > g", f,g);
	else
	printf("f < g", f,g);
	
	


    
	//exercice6 : 
	
	int q,r,t;
	printf("\nentrer trois nombres entiers:\n");
	scanf("%d %d %d", &q,&r,&t);
	classement(q,r,t);	


    
	//exercice16 : 
	char o,u;
	printf("\nentrer le premier caractere(o):");
	scanf("\n%c",&o);
	
	printf("\nentrer le second caractere(u):");
	scanf("\n%c",&u);
	
	printf("\navant permutation : o= %c, u= %c", o, u);

	permutation(&o,&u);
	printf("\napr�s permutation : o= %c, u= %c", o, u);
	
	


	//exercice17 : 
	int p,h,s;
	printf("\nentrer deux nombres entiers: \n");
	scanf("%d %d",&p, &h);
	s = somme(p, h);
		printf("\nla somme de : %.3d + %.3d = %.3d\n", p,h,s);


    
    //exercice TD : enseignant
int main (int argc, char *argv[]){

	int n;
	printf("donner la taille du vecteur: ");
	scanf("%d, &n");

	Enseignant *vecteur = (Enseignant*)malloc(n*sizeof(Enseignant));
	if(vecteur == NULL){
		fprintf(stderr, "Erreur d'allocation m�moire\n");
		return 1;
	}
creation_enseignants(vecteur, n);

for	(int k=0; k<n; k++){
	printf("code : %s \n", vecteur[k].code);
	printf("nom : %s \n", vecteur[k].nom);
	printf("prenom : %s \n", vecteur[k].prenom);
	printf("grade : %s \n", vecteur[k].grade);
	printf("sexe : %s \n", vecteur[k].sexe);
	
	free(vecteur);
	return 0;
}	
}  


	

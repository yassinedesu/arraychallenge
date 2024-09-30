//......................... Challenge 3 : Somme des Éléments .........................//

#include <stdio.h>

int main(){
    int i,nombre;
    printf("Veuillez entrer un nombre : ");
    scanf("%d",&nombre);
    int tableau[nombre];
    for ( i = 0; i < nombre ; i++)
    {
        printf("Entrez N%d : ",i+1);
        scanf("%d",&tableau[i]);
    }
    int S = 0; // S --> La somme
    for ( i = 0; i < nombre ; i++)
    {
        S+=tableau[i];
    }
    printf("La somme est : %d",S);
    return 0;    
}

//\\//\\// ------------- Challenge 5 : Trouver le Minimum ------------- //\\//\\//

#include <stdio.h>
int main(){
    int i,taille,min;
    printf("Veuillez entrer nombre de valeur a saisir : ");
    scanf("%d",&taille);
    int tableau[taille];
    for ( i = 0 ; i < taille ; i++)
    {
        printf("N%d : ",i+1);
        scanf("%d",&tableau[i]);
    }
    min = tableau[0];
    for ( i = 1 ; i < taille ; i++)
    {
        if (min > tableau[i])
            min = tableau[i];
    }
    printf("Le minimum est : %d",min);
    return 0;
}

//\\//\\// ------------- Challenge 4 : Trouver le Maximum ------------- //\\//\\//

#include <stdio.h>

int main(){
    int i,taille,max;
    printf("Veuillez entrer le nombre des valeurs a saisir : ");
    scanf("%d",&taille);
    int tableau[taille];
    for ( i = 0; i < taille; i++)
    {
        printf("N%d : ",i+1);
        scanf("%d",&tableau[i]);
    }
    max = tableau[0];
    for ( i = 1; i < taille ; i++)
    {
        if (max < tableau[i])
            max = tableau[i];
    }
    printf("Le max est : %d",max);
    
    return 0;
}

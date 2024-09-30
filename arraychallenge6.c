//\\//\\// ------------- Challenge 6 : Multiplication des Éléments ------------- //\\//\\//

#include <stdio.h>

int main(){
    int i , taille , x; // x howa le facteur
    printf("Entrez le nombre des valeurs a saisir : ");
    scanf("%d",&taille);
    int tableau[taille] , m ; // m ----> Multiplication
    for ( i = 0; i < taille ; i++)
    {
        printf("Entrez N%d : ",i+1);
        scanf("%d",&tableau[i]);
    }
    printf("entrez le facteur de multiplication : ");
    scanf("%d",&x);
    for ( i = 0; i < taille ; i++)
    {
        m = x * tableau[i];
        printf("%d x %d = %d\n",x,tableau[i],m);
    }
    return 0;   
}

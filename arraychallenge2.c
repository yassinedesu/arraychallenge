//......................... Challenge 2 : Saisie et Affichage des Éléments .........................//

#include <stdio.h>
int main(){
    
    int i , nombre;
    printf("Veuillez entrer un nombre : ");
    scanf("%d",&nombre);
    int element[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("Entrez le N %d : ",i+1);
        scanf("%d",&element[i]);
    }
    for (i = 0; i < nombre; i++)
    {
        printf("%d\t",element[i]);
    }
    
    return 0;   
}

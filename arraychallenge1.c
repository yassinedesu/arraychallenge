// .......................... Challenge 1 : Initialisation et Affichage ..........................//

#include <stdio.h>
int main(){
    int i, number[10] = {1,2,3,4,5,6,7,8,9,10};
    for(i = 1 ; i < 10 ; i++){
        printf("%d\n",number[i]);
    }
    return 0;
}
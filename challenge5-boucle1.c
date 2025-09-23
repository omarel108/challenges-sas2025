
#include <stdio.h>
int main()
{
    int i, base, exposant, resultat;

    printf("entrez la base: ");
    scanf("%d",&base);

    printf("entrez l'exposant: ");
    scanf("%d",&exposant);

    resultat=1;
    for(i=1;i<=exposant;i++){
        resultat= resultat*base;

    }
    printf("%d^%d= %d",base,exposant,resultat);


   return 0;
}

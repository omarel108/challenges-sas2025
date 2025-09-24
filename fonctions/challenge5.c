
#include <stdio.h>
int factorielle(int n){
    int fact,i;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,fact;
    printf("entrez la valeur de n : ");
    scanf("%d",&n);

    fact= factorielle(n);
    printf("%d!= %d",n,fact);

   return 0;
}

#include <stdio.h>

int main()
{
    int n,i,s;
    printf("entrez un nombre: ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("la somme est: %d",s);

   return 0;
}

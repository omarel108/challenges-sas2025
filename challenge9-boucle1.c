#include <stdio.h>

int main()
{
    int i,n;
    do{
    printf("entrez un nombre: ");
    scanf("%d",&n);
    }while (n<=0);

    for(i=1;i<=n;i++){
        printf("%d ",i);
    }


   return 0;
}

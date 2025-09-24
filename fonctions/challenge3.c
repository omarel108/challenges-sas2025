#include <stdio.h>
int maximum (int a , int b){

    int max;
    if(a>b)
      max=a;
    else
      max=b;

    return max;
}

int main()
{
    int a,b,max;
    printf("entrez la valeur de a : \n");
    scanf("%d",&a);
    printf("entrez la valeur de b : \n");
    scanf("%d",&b);

    max= maximum (a,b);
    printf("le plus grand nombre est: %d",max);

   return 0;
}


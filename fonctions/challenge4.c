#include <stdio.h>
int minimum (int a , int b){

    int min;
    if(a<b)
      min=a;
    else
      min=b;

    return min;
}

int main()
{
    int a,b,min;
    printf("entrez la valeur de a : \n");
    scanf("%d",&a);
    printf("entrez la valeur de b : \n");
    scanf("%d",&b);

    min= minimum (a,b);
    printf("le plus petit nombre est: %d",min);

   return 0;
}


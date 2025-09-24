
#include <stdio.h>
int produit  (int a , int b){

    int p;
    p= a*b;
    return p;
}

int main()
{
    int a,b,p;
    printf("entrez la valeur de a : \n");
    scanf("%d",&a);
    printf("entrez la valeur de b : \n");
    scanf("%d",&b);

    p= produit (a,b);
    printf("le produit de a et b est: %d",p);

   return 0;
}

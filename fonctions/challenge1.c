#include <stdio.h>
int somme (int a , int b){

    int s;
    s= a+b;
    return s;
}

int main()
{
    int a,b,s;
    printf("entrez la valeur de a : \n");
    scanf("%d",&a);
    printf("entrez la valeur de b : \n");
    scanf("%d",&b);

    s= somme (a,b);
    printf("la somme de a et b est: %d",s);

   return 0;
}


#include <stdio.h>

int main()
{
    int i,n, u, upp, up  ;
    do{

    printf("entrez un nombre: ");
    scanf("%d",&n);

    }while(n<2);
        upp=0;
        up=1;
        printf("u0= %d \n",upp);
        printf("u1= %d \n",up);


    for (i = 2; i <= n; i++) {
        u = upp + up;
        printf("u%d = %d\n", i, u);


        upp = up;
        up  = u;
    }
   return 0;
}

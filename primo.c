#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,primo;
    int i;
    int a=0;
   printf("ingrese un numero entero\n");
   scanf("%d\n", &num);
   for ( i = 1; i<=num; i++)
    {
        if (num %i== 0)
        {
            a++;
        }
        
        }  
    if (a==2) {
        printf("El numero ingresado  es primo.\n");
    } else {
        printf("El numero ingresado  no es primo.\n");
    }
    
    
    return 0;
   }
   
   

    
    
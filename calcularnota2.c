#include <stdio.h>
int main(){
    int Num;
    printf("Escribe la nota numerica: ");
    scanf("%d", &Num);
    if (Num<0 || Num>10){
         printf("La nota no se puede calcular, tiene que estar entre 0 y 10\n");
      }
    else if(Num>=0 || Num<=10){
        if (Num<5 && Num>=0)
               printf("La nota es Suspenso \n") ;
        if (Num>4 && Num<7)
                printf("La nota es Aprobado \n");
        if (Num>6 && Num<9)
                printf("La nota es Notable \n");
        if (Num>8 && Num<11)
                printf("La nota es Sobresaliente \n");
    }
   return 0;
}
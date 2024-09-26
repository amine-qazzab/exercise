// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int nombre1,nombre2;
    char choix;
    printf("donner le premier nombre : ");
    scanf("%d" , &nombre1);
    getc(stdin);
    printf("donner l'operateur : ");
    scanf("%c" , &choix);
    printf("donner le deuxième nombre : ");
    scanf("%d" , &nombre2);
    
    switch(choix)
    {
case'+' :
printf("%d+%d=%d\n" ,nombre1,nombre2,nombre1 + nombre2);
break;
case'-' :
printf("%d-%d=%d\n" ,nombre1,nombre2,nombre1 - nombre2);
break;
case'*' :
printf("%d*%d=%d\n" ,nombre1,nombre2,nombre1 * nombre2);
break;
case'/' :
if (nombre2!=0)
printf("%d/%d=%.4f\n" ,nombre1,nombre2, (float) nombre1/nombre2);
else
printf("math error . impossible de deviser par 0\n");
break;
default : printf("operation inconnu\n");
    }
    

    return 0;
}
float peso_n1(float n){
   float result = n*40/100;
    return result;
}
float peso_n2(float n){
    float result = n*60/100;
    return result;
}

#include <stdio.h>

int main()
{
    float nota1;
    
    float nota2;
    
    float nota_final;

    printf("Seja bem vindo, Calcule sua média aqui.\n\n");

    printf("Digite o valor da primeira nota: ");
    scanf("%f",&nota1);
    
    printf("Digite o valor da segunda nota: ");
    scanf("%f",&nota2);
    
    float resu1 = peso_n1(nota1);
    
    float resu2 = peso_n2(nota2);
    
    nota_final = resu1+resu2;
    
    printf("Peso nota número 1: %.1f\n",resu1);
    
    printf("Peso nota número 2: %.1f\n",resu2);
    
    printf("Nota final: %.1f\n", nota_final);
    
    if(nota_final < 5){
        printf("Conceito final: (D)");
        }else if(nota_final < 7){
            printf("Conceito final: (C)");
            }else if(nota_final < 9){
                printf("Conceito final: (B)");
            }else{
                printf("Conceito final: (A)");
            }
            
    return 0;
    
}
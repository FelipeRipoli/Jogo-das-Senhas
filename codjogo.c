#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

    int main(){
        int num, num2, result; 
        int cont;
        int sair =0;
        while (sair==0){
        
            printf("Digite a senha (números de 1 a 100) : \n");
            scanf("%d", &num);
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            /*espaços criados para o player 2 não conseguir ver a senha*/

        for (cont=1; cont <=5; cont++){
            printf("Player 2 : Tente advinhar o valor da senha : \n");
            scanf("%d", &num2);
    
        if((num>100)||(num<1)){
            printf("\n Apenas números de 1 a 100!\n");
            
        }else if(num==num2){
            printf("\n Parabéns, você acertou!\n"); 
                cont=6;
            
        }else if((num2==num-1)||(num2==num+1)){
            printf("Está quente!!\n");
            
        }else if(num!=num2){
            printf("Está errado!\n");
        }
    }
        printf("Digite 1 para sair, ou 0 para continuar \n");
        scanf("%d", &sair);
    }
        printf("--------Até Logo!--------------");
        
} 

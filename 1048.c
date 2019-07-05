#include <stdio.h>

void main(){


    float salario,reajuste;
    int percentual;
    scanf("%f",&salario);
    reajuste = salario;


    if(salario>0 && salario <= 400){
	 salario = salario*1.15;
         percentual = 15;
    }
    else if(salario>400 && salario <= 800) {
         salario = salario*1.12;
	  percentual = 12;
    }
    else if(salario>800 && salario <= 1200) {
	 salario = salario*1.10;
          percentual = 10;
    }
    else if(salario>1200 && salario <= 2000){
         salario = salario*1.07;
	  percentual = 7;
    }
    else if(salario>2000){
	 salario = salario*1.04;
          percentual = 4;
    }
    
    reajuste = salario - reajuste;    

    printf("Novo salario: %.2f\n",salario);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %i %%\n",percentual);
    

}
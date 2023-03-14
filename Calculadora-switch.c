#include <stdio.h>
#include <stdbool.h>



int main()
{
  printf(" Calculadora \n Escolha uma operação:"); 
  
  int op; //variavel para a operação
  bool erro; // variavel boolleano para definir condição V/F
  do{ //condição de loop para repetir o codigo apos uma operação
  do{ //loop para que seja informado uim dos valores desejados

    printf(" \n\n 0-sair \n 1-adicao \n 2-subtracao \n 3-multiplicacao \n 4-divisao");
    printf("\n Qual opção? ");
    scanf("%i", &op);
    erro = op<0 || op>4;
    if(erro)puts("\n\a valor inválido ");
  
   
  
   } while(erro); //condição "while" (booleano) em que caso seja falsa, o loop acaba e ira ler a proxima linha  
    
    if (op == 0)//condição "if" para caso deseja sair 
    {
        system ("cls");
        printf("Obrigado");
        return 0; //"return 0" para para o programa
    }
    


  float a, b, resultado; //variaveis para as operações e resultados
  printf("\n Digite o primeiro número: "); //informação pedindo o valor 
  scanf("%f", &a); //atribui o primeiro valor a vareiavel "a"
  printf("\n Digite o segundo número: "); //informação na tela pedindo segundo valor
  scanf("%f", &b);//atribui o primeiro valor a vareiavel "b"
  system ("cls");
  switch (op) //comando para analisar o valor da variavel "op"
  {
  case 1: //caso 1 
    resultado = (a + b); //operação para o primeiro caso
    printf("%.f + %.f = %.2f", a, b, resultado); //informação na tela
    break;//para o "switch" de ler os proximos blocos de comandos
  case 2:
  resultado = (a - b); //operação para o segundo caso
  printf("%.f - %.f = %.2f", a, b, resultado);//informação na tela
    break;//para o "switch" de ler os proximos blocos de comandos
  case 3: 
  resultado = (a * b); //operação para o terceiro caso
  printf("%.f * %.f = %.2f", a , b, resultado);//informação na tela
    break;//para o "switch" de ler os proximos blocos de comandos
  case 4:
  resultado = (a / b); //operação para o quarto caso
  printf("%.f / %.f = %.2f", a, b, resultado);//informação na tela
    break; //para o "switch" de ler os proximos blocos de comandos
    
    }

  }while(op!=0); //"while" para caso (op -diferente- de 0) seja falso, repita o "do" da linha:12
    return 0;
}
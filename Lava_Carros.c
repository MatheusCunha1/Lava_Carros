#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <locale.h>
#include <unistd.h>


struct Tcarro{ 
  char dono[30];
  char placa[8];
  char modelo[15];
}; 

void green ();
void yellow ();
void red ();
void blue ();
void cyan ();
void reset ();

void flush_in();

void adicionaCarroPatio(struct Tcarro cadastro[],int *contPatio,int tamPatio);

void adicionaCarroRua(struct Tcarro rua [3], int*contRua);

void movimentaFila(struct Tcarro cadastro[], struct Tcarro rua[3], int *contRua, int *contPatio); 

void lavaCarro();

void consultaFilas(struct Tcarro vetor[], int *contador);


int main (void) {
  int Op = 0;  
  int tamPatio;
  int contRua = 0; 
  int contPatio = 0;
  struct Tcarro rua [3];
  struct Tcarro *cadastro;
  cadastro = (struct Tcarro *) malloc(tamPatio*sizeof(struct Tcarro));

  cyan();
  printf("|=====================|\n|     LAVA-RÁPIDO     |\n|=====================|\n");
  reset(); 
  printf("\nOlá seja bem-vindo ao nosso lava rápido!!\n"); 
  printf("\nInforme a quantidade de carros a serem lavados no pátio: "); 
  scanf("%d", &tamPatio);
  while(tamPatio <= 0) {  
    red();
      printf("\nNúmero inválido\nInforme um valor maior que zero: ");
    reset();
    scanf("%d", &tamPatio);
  } 
  printf("\nCapacidade da fila de espera é 3 ");
  red();
  printf("\n OBS: Se o limite de carros no pátio for excedido eles serão estacionados \nna rua e consultados na opção fila de espera\n");
	reset();
  while (Op != 5){
    cyan();
    printf("|=================================|\n");
    printf("|              MENU               |\n");
	  printf("|=================================|\n");
	  printf("| [1]-Adicionar carro na fila     |\n");
	  printf("| [2]-Lavar carro                 |\n");
		printf("| [3]-Consultar fila de lavagem   |\n");
	 	printf("| [4]-Consultar fila de espera    |\n");
		printf("| [5]-Encerrar                    |\n");
		printf("|=================================|\n");
		reset();
    printf("\n\nInforme uma opção do menu acima: ");
		scanf("%d", &Op);
    flush_in();
    system ("clear");
		switch (Op){
			case 1:
        if (contPatio < tamPatio) {
          adicionaCarroPatio(cadastro,&contPatio,tamPatio); 
        } 
        else if (contRua < 3) { 
          if (contRua == 0) {
            red();
              printf("|Capacidade geral do pátio excedida|\n");
            reset();   
          }   
          adicionaCarroRua(rua,&contRua);
        }   
        else { 
          red();
            printf("|Capacidade geral do lava carros excedida|\n");
          reset();     
        }    
      break;
	
			case 2:   
			  movimentaFila(cadastro,rua,&contPatio, &contRua);
      break; 
			
			case 3:
        consultaFilas(cadastro,&contPatio); 
			break;
	
			case 4:
        consultaFilas(rua,&contRua);     
			break;
			
			case 5: 
        cyan();
			    printf("Programa Encerrado!");
        reset();
        exit(1);
      break;
		
			default: 
			red ();
        printf("|Opção inválida|\n");
      reset();
			break;
		}		
	}			 
	return 0;
}

void adicionaCarroPatio(struct Tcarro cadastro[],int *contPatio, int tamPatio) {
  printf("\n|Adicionando véiculo para o pátio|\n"); 
  printf("\nDigite seu nome:");
  fgets(cadastro[*contPatio].dono,30,stdin); 
  printf("Digite o modelo do carro:");
  fgets(cadastro[*contPatio].modelo,15,stdin);
  printf("Qual a placa do veículo:");
  fgets(cadastro[*contPatio].placa,8,stdin);
  system ("clear");
  *contPatio += 1;  
  green();   
    printf("Carro adicionado a fila com sucesso\n");
    printf("Capacidade de %d/%d\n" , *contPatio, tamPatio);
    printf("\nPressione ENTER para continuar\n");
  reset();
  flush_in();    
}  

void adicionaCarroRua(struct Tcarro rua [3], int*contRua) {
  printf("\n|Adicionando véiculo para a rua|\n");
  printf("\nDigite o nome do cliente:");   
  fgets(rua[*contRua].dono,30,stdin); 
  printf("Digite o nome do modelo:");
  fgets(rua[*contRua].modelo,15,stdin);
  printf("Digite a placa do veículo:");
  fgets(rua[*contRua].placa,8,stdin); 
  system ("clear");  
  *contRua += 1;  
  green();
    printf("Carro adicionado a fila com sucesso\n");
    printf("Capacidade de %d/3\n",*contRua);
    printf("\nPressione ENTER para continuar\n");
  reset(); 
  flush_in(); 
}

void movimentaFila(struct Tcarro cadastro[], struct Tcarro rua[3],int *contPatio, int *contRua ) {

  if (*contPatio > 0 && *contRua == 0) {
    lavaCarro();
    for (int i = 0;  i < *contPatio-1 ; i++) {
      strcpy (cadastro[i].dono, cadastro[i+1].dono);
      strcpy (cadastro[i].modelo, cadastro[i+1].modelo);
      strcpy (cadastro[i].placa, cadastro[i+1].placa);       
    }     
    strcpy (cadastro[*contPatio].dono, "");
    strcpy (cadastro[*contPatio].modelo, "");
    strcpy (cadastro[*contPatio].placa, "");
    *contPatio -= 1;
  }       
        
  else if  (*contPatio > 0 && *contRua > 0) {
    lavaCarro(); 
    for (int i = 0; i < *contPatio-1; i++) {
      strcpy (cadastro[i].dono, cadastro[i+1].dono);
      strcpy (cadastro[i].modelo, cadastro[i+1].modelo);
      strcpy (cadastro[i].placa, cadastro[i+1].placa);    
    }
    strcpy (cadastro[*contPatio-1].dono, rua[0].dono);
    strcpy (cadastro[*contPatio-1].modelo, rua[0].modelo);
    strcpy (cadastro[*contPatio-1].placa, rua[0].placa); 

    for (int i = 0; i < *contRua-1; i++) {
      strcpy (rua[i].dono, rua[i+1].dono);
      strcpy (rua[i].modelo, rua[i+1].modelo);
      strcpy (rua[i].placa, rua[i+1].placa); 
    }  
      strcpy (rua[*contRua].dono, "");
      strcpy (rua[*contRua].modelo, "");
      strcpy (rua[*contRua].placa, "");
      *contRua -= 1;
    }    
        
  else {
    red(); 
      printf("Nenhum carro adicionado\n");
    reset(); 
  }
}
void lavaCarro(){
  cyan(); 
    printf("1° Aplicação\n");
    printf("Sabão\n");
    sleep(2);
    system("clear");
    printf("2° Aplicação\n");
    printf("Àgua\n");
    sleep(2);
    system("clear");
    printf("3° Aplicação\n");
    printf("Cera\n");
    sleep(2);
    system("clear");
    reset();
    green();
      printf("Carro lavado\n");
    reset();   
}    
void consultaFilas (struct Tcarro *vetor, int *contador) {
  if (*contador <= 0){
    red();
      printf("Nenhum carro costa na fila\n\n");
    reset(); 
  }      
  else {
    green();
      printf("|FILA DE LAVAGEM|\n");
      printf("\nOs carros que forem lavados são removidos da lista de Lavagem, já os da fila de espera são transferidos para o pátio conforme foram adicionados\n");
    reset();  
    for (int i = 0;  i < *contador; i++) { 
    printf("====================\n");
    printf("%s", vetor[i].dono);
    printf("%s", vetor[i].modelo);
    printf("%s\n", vetor[i].placa);
   }
  }
}

void yellow() {
  printf("\033[0;33m");
} 
void green() {
  printf("\033[0;32m");
} 
void red () {
  printf("\033[1;31m");
}
void blue () {
  printf("\033[0;34m"); 
}
void cyan () {
  printf("\033[0;36m");
}
void reset () {
  printf("\033[0m");
}


void flush_in()
{
  int ch;
  while ((ch = fgetc(stdin)) != EOF && ch != '\n')
  {
  }
}

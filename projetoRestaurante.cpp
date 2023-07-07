#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    char zap[12];
    char endereco[100];
    int alergico;
    int dia;
    
    
	printf("\n----------Reserva de Mesas do Restaurante----------\n");
    printf("\n----------TERRACO BRASILEIRO----------\n");
	
	printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite seu numero de WhatsApp: ");
    scanf("%s", &zap);

    printf("Digite seu endereco: ");
    scanf("%s", &endereco);

    printf("Voce eh alergico(a) a camarao?\n(Digite 1 para sim ou 0 para nao): ");
    scanf("%d", &alergico);

    if (alergico == 1){
       printf("Voce nao podera escolher o prato do sabado(7)\nEscolha outro dia\n");
       
}
 
       printf("Digite o dia da reserva de acordo com os dias da semana\nSegunda(1), Terca(2)...Domingo(7): ");
    scanf("%d", &dia);

    // Simulando a seleção do prato do dia com base na reserva
  
	  
	printf("\nResumo da reserva:\n");
    printf("Nome: %s\n", nome);
    printf("WhatsApp: %s\n", zap);
    printf("Endereco: %s\n", endereco);
    printf("Alergico: %s\n", alergico ? "Sim" : "Não");
    printf("Dia da reserva: %d\n", dia);
 
    
     
    
	if (dia == 1){
        printf("O prato referente ao dia escolhido:\n Macarronada de Carne");
    }else if (dia == 2){
        printf("O prato referente ao dia escolhido:\n Risoto ao molho inglês");
    }else if (dia == 3){
        printf("O prato referente ao dia escolhido:\n strogonoff ao molho madeira");
    }else if(dia == 4){
        printf("O prato referente ao dia escolhido:\n Salmao grelhado");
	}else if(dia == 5){
	  	printf("O prato referente ao dia escolhido:\n File mignon ao vinho");
	}else if(dia == 6){
	  	printf("O prato referente ao dia escolhido:\n Lasanha de camarao");
	}else if(dia == 7){
	  	printf("O prato referente ao dia escolhido:\n Lagosta");	
    }
	  
  
	return 0;
}

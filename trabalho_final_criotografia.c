#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	
	int op;
	char texto[40]="";
	int i=0; // indice que vai percorrer o texto
	
	setlocale(LC_ALL, "Portuguese");
	
	// menu de opções
	
	do{
		system("cls"); 
		
		printf("--  Menu de Opções --\n\n");
		printf(" 1. Criptografar mensagem\n");
		printf(" 2. Descriptografar mensagem\n");
		printf(" 3. Fim\n\n");
		
		printf(" - Digite sua opção: ");
		
		scanf("%d", &op); // leitura opção do menu
		
		switch(op){
			
			case 1: // criptografia	
			
				printf("\n - Digite sua mensagem: ");
				getchar();
				gets(texto);	
				
				for(i=0; i<strlen(texto);i++){
					
					texto[i] = tolower(texto[i]);
					
					if(texto[i]=='a')
						texto[i] = 'Z';
						
					if(texto[i]=='b')
						texto[i] = 'F';
						
					if(texto[i]=='c')
						texto[i] = 'H';
					
					if(texto[i]>=100 && texto[i]<=122){
						texto[i] = texto[i] - 3; 
					}
							
				}
				
				printf("\n - Texto criptografado: %s\n", texto);
				getche();		
				
			break;
			
			case 2:
				
				printf("\n - Digite sua mensagem: ");
				getchar();
				gets(texto);	
				
				for(i=0; i<strlen(texto);i++){
						
					if(texto[i]>=97 && texto[i]<=122){
						texto[i] = texto[i] + 3; 
					}
					
					if(texto[i]=='Z')
						texto[i] = 'a';
						
					if(texto[i]=='F')
						texto[i] = 'b';
						
					if(texto[i]=='H')
						texto[i] = 'c';										
				}
				
				printf("\n - Texto descriptografado: %s\n", texto);	
				getche();
				
			break;
			
			case 3:
				
			break;
			
			default:
				printf("\nOpção Invalida\n");
		}
		
	}while(op!=3);
	
}

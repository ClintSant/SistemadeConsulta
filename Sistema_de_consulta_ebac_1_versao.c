#include <stdio.h> //biblioteca de domunica��o com usu�rio//
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria//
#include <locale.h> //biblioteca de aloca��o de texto por regi�o//
#include <string.h>//biblioteca respons�vel por cuidar das strings//

int  registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// in�cio da cria��o das vari�veis/string
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//Final da cria��o de vari�veis
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf);//%s - refere-se a string
	

	strcpy(arquivo, cpf);             //respons�vel por copiar os valores das strings//
	
	FILE *file;                      //comando para procurar um arquivo criado (acesse um FILE (fun��o pronta pelo sistema) e -> crie um file//
	file = fopen(arquivo, "w");     //criar arquivo e fopen � para abrir o arquivo, w significa escrever writing.
	fprintf (file, cpf);            //salvo o valor da vari�vel//
	fclose(file);                  //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o nome a ser cadastrado:  ");
	scanf("%s", nome );
	
	file = fopen(arquivo, "a");
	fprintf(file, nome );
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o sobrenome a ser cadastrado: ");
	scanf ("%s", sobrenome );
	
	file = fopen (arquivo, "a");
	fprintf(file, sobrenome, "," );
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, "," );
	fclose(file);
	
	printf(" Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo) ;
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo );
	fclose(file);
	

	system("pause"); //utilizado para pausar o programa.
	
}	

int consulta()
{
	
	setlocale(LC_ALL,"Portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf(" Digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf (" N�o foi poss�vel abrir o arquivo, n�o localizado!. ");
	}
	
	while(fgets (conteudo, 200, file) != NULL);
	{
		printf("\n Essas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
	}
	
	system ("pause");
	
	
	
}


int deletar()
{
	char cpf [40];
	
	printf ("Digite o CPF do usu�rio a ser deletado: ");
	scanf ("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file= fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}

	
	
}


int main()
	{
	int opcao=0;//Definindo vari�veis (int: N�mero inteiro ( para mencionar em um texto: %i ou %d )//
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	

	
	setlocale(LC_ALL,"Portuguese");//Definindo a linguagem//
	
	printf("###Cart�rio da EBAC###\n\n");//Inicio do menu//
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n\n");
	printf("\t2 - Consultar nomes\n\n");
	printf("\t3 - Deletar nomes\n\n");
	
	printf("Op��o:"); //fim do menu//
	
	scanf("%d",&opcao);//Armazenando a escolha do usu�rio//
	
	system("cls"); //fun��o respons�vel por limpar a tela
	
	switch(opcao)
	{
		case 1://inicio da sele��o das condicionais//
		registro();	// chamada de fun��es
		
		break;
		
		case 2: 
		consulta();
		
		break;
		
		case 3:
		deletar();
		
		break;
		
		
		
		
		
		
		
		default:
		printf("Essa op��o n�o est� dispon�vel\n");
		system("pause");
		break;//fim da sele��o//
		
	}
	

	
	
	
	}		
			
}

	
	
		
		
		
	
		
	
	
		
	
	
	
	

	
	

	
	

	

	
	
	
	
	



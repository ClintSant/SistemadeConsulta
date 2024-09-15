#include <stdio.h> //biblioteca de domunicação com usuário//
#include <stdlib.h> //biblioteca de alocação de espaço em memória//
#include <locale.h> //biblioteca de alocação de texto por região//
#include <string.h>//biblioteca responsável por cuidar das strings//

int  registro() // Função responsável por cadastrar os usuários no sistema
{
	// início da criação das variáveis/string
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//Final da criação de variáveis
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
	scanf("%s", cpf);//%s - refere-se a string
	

	strcpy(arquivo, cpf);             //responsável por copiar os valores das strings//
	
	FILE *file;                      //comando para procurar um arquivo criado (acesse um FILE (função pronta pelo sistema) e -> crie um file//
	file = fopen(arquivo, "w");     //criar arquivo e fopen é para abrir o arquivo, w significa escrever writing.
	fprintf (file, cpf);            //salvo o valor da variável//
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
		printf (" Não foi possível abrir o arquivo, não localizado!. ");
	}
	
	while(fgets (conteudo, 200, file) != NULL);
	{
		printf("\n Essas são as informações do usuário: ");
		printf("%s", conteudo);
	}
	
	system ("pause");
	
	
	
}


int deletar()
{
	char cpf [40];
	
	printf ("Digite o CPF do usuário a ser deletado: ");
	scanf ("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file= fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!\n");
		system("pause");
	}

	
	
}


int main()
	{
	int opcao=0;//Definindo variáveis (int: Número inteiro ( para mencionar em um texto: %i ou %d )//
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	

	
	setlocale(LC_ALL,"Portuguese");//Definindo a linguagem//
	
	printf("###Cartório da EBAC###\n\n");//Inicio do menu//
	printf("Escolha a opção desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n\n");
	printf("\t2 - Consultar nomes\n\n");
	printf("\t3 - Deletar nomes\n\n");
	
	printf("Opção:"); //fim do menu//
	
	scanf("%d",&opcao);//Armazenando a escolha do usuário//
	
	system("cls"); //função responsável por limpar a tela
	
	switch(opcao)
	{
		case 1://inicio da seleção das condicionais//
		registro();	// chamada de funções
		
		break;
		
		case 2: 
		consulta();
		
		break;
		
		case 3:
		deletar();
		
		break;
		
		
		
		
		
		
		
		default:
		printf("Essa opção não está disponível\n");
		system("pause");
		break;//fim da seleção//
		
	}
	

	
	
	
	}		
			
}

	
	
		
		
		
	
		
	
	
		
	
	
	
	

	
	

	
	

	

	
	
	
	
	



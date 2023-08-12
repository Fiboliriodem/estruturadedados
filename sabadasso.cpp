#include <stdlib.h>
#include <stdio.h>


int main (){
	struct cadastro_de_Aluno {
		char nome [40];
		char diciplina [50];
		int matricula;
		char email[50];
		int telefone;
		float nota1;
		float nota2;
	}; 
	struct cadastro_de_Professor{
		char nome [40];
		int matricula;
		char endereco[50];
		int cpf;
	};
	struct cadastro_de_Aluno aluno;
	printf("\n Cadastro de alunos");
	printf("\ninforme o nome do aluno:  ");
	fflush(stdin);
	fgets(aluno.nome, 40, stdin);
	printf("\ninforme o nome da diciplina:  ");
	fflush(stdin);
	fgets(aluno.diciplina, 50, stdin);
	printf("\ninforme o nome do email:  ");
	fflush(stdin);
	fgets(aluno.email, 50, stdin);
	printf("\ninforme o numero da matricula:  ");
	scanf("%d", &aluno.matricula);
	printf("\ninforme o numero do telefone:  ");
	scanf("%d", &aluno.telefone);
	
	printf("\ninforme a primeira nota:  ");
	scanf("%f", &aluno.nota1);
	printf("\ninforme a segunda nota:  ");
	scanf("%f", &aluno.nota2);
	
	printf("\nexibindo dados cadastrados");
	printf("\nnome : %s", aluno.nome);
	printf("\ndiciplina : %s", aluno.diciplina);
	printf("\nMatricula : %d", aluno.matricula);
	printf("\nemail : %s", aluno.email);
	printf("\ntelefone : %d", aluno.telefone);
	printf("\nnota1 : %.2f", aluno.nota1);
	printf("\nnota2 : %.2f", aluno.nota2);
	return 0;
}


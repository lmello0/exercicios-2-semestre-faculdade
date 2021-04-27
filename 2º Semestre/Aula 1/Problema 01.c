#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i = 1;
	int todosExames = 0, examesABD = 0, examesAB = 0;
	char exameA, exameB, exameC, exameD, exameE, continuar;
	
	do{
		printf("ALUNO %d: \n\n", i);
		printf("A = Aprovado\nR = Reprovado\n\n");
		i++;
		do{
			printf("Exame A [A/R]: ");
			scanf(" %c", &exameA);
		}while(exameA != 'A' && exameA != 'R');
		
		do{
			printf("Exame B [A/R]: ");
			scanf(" %c", &exameB);
		}while(exameB != 'A' && exameB != 'R');
		
		do{
			printf("Exame C [A/R]: ");
			scanf(" %c", &exameC);
		}while(exameC != 'A' && exameC != 'R');
		
		do{
			printf("Exame D [A/R]: ");
			scanf(" %c", &exameD);
		}while(exameD != 'A' && exameD != 'R');
		
		do{
			printf("Exame E [A/R]: ");
			scanf(" %c", &exameE);
		}while(exameE != 'A' && exameE != 'R');
		
		if(exameA == 'A' && exameB == 'A' && exameC == 'A' && exameD == 'A' && exameE == 'A'){
			todosExames++;
		} else if((exameA == 'A' && exameB == 'A') && (exameC == 'A' || exameD == 'A') && exameE == 'R'){
			examesAB++;
		} else if(exameA == 'A' && exameB == 'A' && exameD == 'A' && (exameC == 'R' || exameE == 'R')){
			examesABD++;
		}
		
		printf("\n\nContinuar? [S/N] ");
		scanf(" %c", &continuar);
		if(continuar == 'S'){
			printf("\n\n");
		}
	}while(continuar == 'S');
	
	printf("\n-=-= ESTATÍSTICAS =-=-\n\n");
	printf("Alunos que passaram em todos exames: %d\n", todosExames);
	printf("Alunos que passaram A, B e D, mas não em C ou E: %d\n", examesABD);
	printf("Alunos que passaram em A e B, C ou D, mas não em E: %d\n", examesAB);
}

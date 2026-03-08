#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, media;
    int nAlunos;

    printf("\nDigite o numero de alunos: \n");
    scanf("%d", &nAlunos);
    

    for(int i=0; i < nAlunos; i = i+1){
        printf("\nAluno %d\n", i+1);
        printf("Digite a nota 1: \n");
        scanf("%f", &n1);
        printf("Digite a nota 2: \n");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;

        printf("A media eh: %.2f\n", media);

        if(media<6){
            printf("Aluno Reprovado\n");
        }else{
            printf("Aluno Aprovado\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main(){

    int turmas , conta , contr , alunos , nota , cont;
    float mediaTurma , mediaAlunos;
    conta =0;
    contr =0;
    cont =0;
    mediaAlunos =0;

    printf("Digite quantas turmas são \n");
    scanf("%i",&turmas);
    
    for(int i = 1; i<=turmas ; i++){

        do{
            
            printf("Deseja adicionar um aluno , digite um numero positivo caso sim e um negativo caso não\n");
            scanf("%i",&alunos);
            if(alunos < 0){
                printf("Encerrando turma\n");
                printf("Media da turma %f\n", mediaTurma/cont);
                mediaTurma = 0;
                cont = 0;
                break;
            }
            cont++;
            for(int i =1 ; i<=3 ; i++){
                printf("Digite a nota do aluno\n");
                scanf("%i",&nota);
                mediaAlunos = mediaAlunos + nota;
            }
            mediaAlunos = mediaAlunos/3;
            mediaTurma = mediaTurma + mediaAlunos;
            if(mediaAlunos >=7){
                conta++;
            }
            else{
                contr++;
            }

            mediaAlunos = 0;
            
            
        } while (alunos > 0);

 }
        printf("Approvados = %i\n",conta);
        printf("Reprovados = %i\n",contr);
        
    return 0;


}
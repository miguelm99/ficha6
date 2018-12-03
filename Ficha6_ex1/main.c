#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    int aluno = ler_numero();
    printf("1 - Registar notas dos estudantes\n");
    printf("2 - Mostrar notas\n");
    printf("3 - Mostrar média das notas\n");
    printf("4 - Mostrar notas positivas\n");
    printf("5 - Mostrar notas negativas\n");
    printf("6 - Mostrar nota mais alta e nota mais baixa\n");
    printf("0 - Sair\n");
    scanf("%i",&opcao);

    switch(opcao){
        case 0:

            break;
        case 1:
            ler_nota_aluno(aluno);
            break;
        case 2:
            mostrar_notas_alunos();
            break;
        case 3:
            calcular_media_notas(aluno);
            break;
        case 4:
            mostrar_notas_positivas();
            break;
        case 5:
            mostrar_notas_negativas();
            break;
        case 6:
            calcular_nota_mais_alta();
            calcular_nota_mais_baixa();
            break;
    }
    return 0;
}

int ler_numero(){
    int num;
    do{
        printf("introduza o numero de alunos: ");
        scanf("%d", &num);
    }while(num>120 || num<0);

return num;
}

int ler_nota_aluno(int N_aluno){
    printf("%d", N_aluno);
    int nota[N_aluno];
    int num;
    for(int i; i<N_aluno;i++){
    //do{
        printf("introduza a nota ");
        scanf("%d", &nota[i]);
    //}while(num>120 || num<0);
    }
return nota[N_aluno];
}

int mostrar_notas_alunos(int nota){

return nota;
}

int calcular_media_notas(int media){

return media;
}

int calcular_nota_mais_alta(int max){

return max;
}

int calcular_nota_mais_baixa(int min){

return min;
}

int mostrar_notas_positivas(int positiva){

return positiva;
}

int mostrar_notas_negativas(int negativa){

return negativa;
}

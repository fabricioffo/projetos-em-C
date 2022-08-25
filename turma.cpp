#include<stdio.h>
#include<conio.h>
int main ()
{
    int a=0, n, k, i, cont=0;
    do{
    printf("Digite quantos alunos tem na turma A:\n"); 
    scanf("%d", &n);
    }while(n<=0);
    int matriculas[n];
    
    for(i = 0; i < n; i++) {
        do{
        printf("Digite a matricula do aluno:\n");
        scanf("%d", &matriculas[i]);
            if(matriculas[i] > 999999 || matriculas[i] < 100000){
                printf("Erro!! digite a matricula novamente dentro dos parametros corretos\n");
            }
        }while(matriculas[i] > 999999 || matriculas[i] < 100000);
    }
    

    do{
    printf("Digite quantos alunos tem na turma B:\n"); 
    scanf("%d", &k);
    }while(k<=0);
    int matriculas_2[k];
    
    for(i = 0; i < k; i++) {
        do{
        printf("Digite a matricula do aluno:\n");
        scanf("%d", &matriculas_2[i]);
            if(matriculas_2[i] > 999999 || matriculas_2[i] < 100000){
                printf("Erro!! digite a matricula novamente dentro dos parametros corretos\n");
            }
        }while(matriculas_2[i] > 999999 || matriculas_2[i] < 100000);
    }
    

    printf("As matrículas dos alunos que estão inscritos somente na turma A são:\n");
    for (i = 0; i < n; i++)
    {
        while(a<k){
            for(a=0; a<k; a++){
                if(matriculas[i] == matriculas_2[a]){
                    cont++;
                }
            }
        }
        if(cont==0){
         printf("%d\n", matriculas[i]);
        }
        a=0;
        cont=0;
    }
        
    printf("As matrículas dos alunos que estão inscritos somente na turma B são:\n");
    for (i = 0; i < k; i++)
    {
      while(a<n){
            for(a=0; a<n; a++){
                if(matriculas_2[i] == matriculas[a]){
                    cont++;
                }
            }
        }
        if(cont==0){
         printf("%d\n", matriculas_2[i]);
        }
        a=0;
        cont=0; 
    }
    
 
    printf("As matrículas dos alunos que estão inscritos na turma A e na turma B:\n");
    for(i = 0; i < n; i++) {
        
        while(a<k){
            for(a=0; a<k; a++){
                if(matriculas[i] == matriculas_2[a]){
                    printf("%d\n", matriculas_2[a]);
                }
            }
        }
            a=0;
    }
        
    
  return 0;
}
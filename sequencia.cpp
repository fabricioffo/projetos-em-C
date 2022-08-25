#include <stdio.h>

int main()
{
    
    int k=0, t=0, i, m, j, n=0,p=0, cont=0,contSeg=0, veri=0;
    
    do{
    printf("Digite o numero maximo da sequencia:");
    scanf("%d", &k);
    }while(k<3);
    
    do{
    printf("Digite a quantidade de subsequencia:");
    scanf("%d", &t);
    
    }while(2>t || t>k);
    
    int vetor[k];
    
    int sequencia[t];
    
    for(i=0; i < k; i++){
        m = i +1;
        printf("digite o %d numero da sequencia:\n", m);
        scanf("%d", &vetor[i]);
    }
    
    while(p<=(k-t)){
        
            for(j=0; j<t; j++){
                sequencia[j] = vetor[j+p];
            }

            n = t;
            
            while(n<=(k-p)-t){
                cont =0;
                for(i=n; i <= (n+(t-1)); i++){
                    for(j=0; j<t; j++){
                        if(sequencia[j] == vetor[i]){
                            cont++;
                            if(cont == t){
                                contSeg++;
                                cont=0;
                            }
                        }
                    }
                }
                n=n+t;
            }
            
            if(contSeg>0){
                printf("\n");
                for(i=0; i<t; i++){
                  printf("%d ",sequencia[i]);
                }
                printf(" - %d vezes",contSeg+1);
                veri++;
            }
        p++;
        contSeg=0;
    }
    if(veri == 0)
    {
        printf("\nNão existe sequencia!");
    }
    
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main()
{
    float valor_sem_desc, valor_final, desc_5=0, desc_10=0, desc_total=0, acre;
    char t, letras[7] = {'E', 'G', 'B', 'A', 'F', 'H', 'T'};
    int validacao = 0, i;
     
    do{
        printf(" Tipos de pulverização:\nE - ervas daninhas\nG - gafanhotos\nB - broca\nA - ervas daninhas + gafanhotos\nF - ervas daninhas + broca\nH - gafanhotos + broca\nT - todos");
        printf("\nDigite o tipo de pulverização que deseja:\n");
        scanf("%c", &t);
        for(i=0; i<7; i++){
            if(letras[i] == toupper(t)){
                validacao = 1;
            }
        }
    }while(validacao == 0);
    do {   
        printf("Digite quantos acre são:\n");
        scanf("%f", &acre);
    }while (acre<=0);  
    
        switch ( toupper(t)){
        case 'E' :
            valor_sem_desc = 50 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
            
        break;
        
        case 'G' :
            valor_sem_desc = 100 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);   
            
        break;
        
        case 'B' :
            valor_sem_desc = 150 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
            
        break;
        
        case 'A' :
            valor_sem_desc = 140 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
           
        break;
        
        case 'F' :
            valor_sem_desc = 190 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
           
        break;
        
        case 'H' :
            valor_sem_desc = 240 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
           
        break;
        
        case 'T' :
            valor_sem_desc = 270 * acre;
            if(acre>10){
                desc_5 = valor_sem_desc * 0.05; // valor do desconto de 5%
            }
            if(valor_sem_desc>750){
                desc_10 = valor_sem_desc - 750;
                desc_10 = desc_10 * 0.10; // 10% de desconto do valor que ultrapassa 750
            }
            
            desc_total = desc_5 + desc_10;
            valor_final= valor_sem_desc - desc_10 - desc_5;
            printf("o valor total do serviço é %.2f, o valor do desconto é %.2f e o valor final é %.2f ", valor_sem_desc, desc_total, valor_final);
           
        break;
        
        default :
            printf ("Letra invalido!\n");
      }
   
        

    return 0;
}


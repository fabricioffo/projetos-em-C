#include <stdio.h>

int main() {
    int n,impar, i,primeiro_impar ;
    printf("Digite o valor que deseja elevar ao cubo:\n ");
    scanf("%d", &n);
    
    primeiro_impar = n * (n-1) + 1;
    printf("%d", primeiro_impar);
    
    impar = primeiro_impar;
    
    for(i=1;i<n;i++){
        impar = impar + 2;
        printf(" + %d ", impar);
    }
  return 0;
}
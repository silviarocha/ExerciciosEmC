#include <stdio.h>
 //bonus (acrescimo) = 15%
int main() {
    
    char n[10];
    float total;
    double salario_fixo, total_vendas;
    
    fgets(n, 10, stdin);
    scanf("%lf%lf", &salario_fixo, &total_vendas);
    
    total = (total_vendas * 0.15) + salario_fixo;
    
    printf("TOTAL = R$ %.2f\n", total);
    
    return 0;
    
}

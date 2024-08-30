#include <stdio.h>

int main() {
    // Write C code here
    float  repeat , menor , maior , deno , resul , fo , ft , ftt , fou , ff , rfo , rft , rftt , rfou , rff , stop ,nc , media;
    int n , p , i;
    
    resul = 0;
    deno = 1;
    p = 0;
    nc = 0;
    repeat = 1 ;
    fo , i , ft , ftt , fou , ff , rfo , rft , rftt , rfou , rff = 0;
while (repeat == 1){
    printf("Digite 0 para fechar: ");
        scanf ( "%f" , &stop );
    if (stop == 0){
        
        repeat = 2;
    }    
    else{
        printf("Digite o num: ");
        scanf ( "%i" , &n );
        nc = nc + 1;
        if (nc == 1){
            maior = n;
            menor = n;
        }
        resul = resul + n;
        media = resul / deno;
        deno = deno + 1;
        if ( n == 0){
            p = p;
            i = i;
        }
        else {
            if( n % 2 == 0){
            p = p + 1;
            printf("É par!\n");
        }
        
        else{
            i = i + 1;
            printf("É ímpar!\n");
        }
        }
        if ( n < 0 ){
            fo = fo + 1;
            rfo = rfo + n;
        }
        else{
            
        if (( n >= 0) && ( n < 15)){
            ft = ft + 1;
            rft = rft + n;
        }
        else{
            
        if  (( n >= 15) && ( n < 100)) {
            ftt = ftt + 1;
            rftt = rftt + n;
        }
        else {
            if ( n >= 1000) {
            fou = fou + 1;
            rfou = rfou + n;
            }
        else{
        if (( n >= 101) && ( n < 1000)){
            ff = ff + 1;
            rff = rff + n;
        }
        if ( n > maior){
            maior = n;
        }
        if ( n < menor){
            menor = n;
        }
        }
        }
        }
        }
        }
        }
        
        

if ( nc > 0){
       printf("N = %i", n );
       printf("\nMaior = %f" , maior );
       printf("\n Menor = %f" , menor);
       printf("\nPares = %i", p );
       printf("\nImpares = %i", i );
       printf("\nmedia = %f" , media );
       printf("\n Faixa 1,2,3,4,5 tem %f %f %f %f %f" , fo , ft , ftt , fou , ff );
       printf("\n Faixa 1,2,3,4,5 tem %f %f %f %f %f" , rfo , rft , rftt , rfou , rff );
}
}

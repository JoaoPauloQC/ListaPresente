#include <stdio.h>

int main() {
    // Write C code here
   float sal , nv;
   printf("Digite seu salário:");
   scanf("%f" , &sal );



if ((sal >= 0) || (sal <= 400)){
    nv = sal * 1.15;
}
else{
if ((sal > 400) || (sal <= 700)){
    nv = sal * 1.12;
}
else{
    
if ((sal > 700) || (sal <= 1000)){
    nv = sal * 1.10;
}
else{
    

if ((sal > 1000 ) || (sal <= 1800)){
    nv = sal * 1.07;
}
else{
if ((sal > 1800) || (sal <= 2500)){
    nv = sal * 1.04;
}
else{
if((sal > 2500 )){
    nv = sal;
    }
else{
    printf("inválido");
}

}
}
}
}
}
printf("seu salário é %.2f", nv);
}
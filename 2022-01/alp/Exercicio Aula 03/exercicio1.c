#include <stdio.h>

int main() {
    float n1,n2,n3,n4, soma;
    printf("digite n1\n");
    scanf("%f%*c", &n1);
    printf("digite n2\n");
    scanf("%f%*c", &n2);
    printf("digite n3\n");
    scanf("%f%*c", &n3);
    printf("digite n4\n");
    scanf("%f%*c", &n4);
    soma=n1+n2+n3+n4;
    printf("soma é:%.0f - n1 =%.0f - n2=%.0f n3=%.0f - n4 =%.0f" ,soma,n1,n2,n3,n4);
    return 0;
} 
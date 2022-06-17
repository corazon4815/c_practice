#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int i, a;
    printf("input number:");
    scanf("%d", &a);
    srand(a); //난수 발생 함수의 난수 발생 시작 값 seed를 설정하는 함수
    for(i=1; i<=5; i++)
        printf("%d \n", rand());
}
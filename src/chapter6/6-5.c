#include <stdio.h>

void main() 
{
    int i = 127;
    int j;
    
    printf("%d, %x \n", i, i); // 변수 i의 값을 10진수와 16진수로 출력
    printf("%x \n", &i); //&연산자 : 주소연산자
    printf("%#x \n", &i);
    printf("%x \n", &j);
    printf("%#x \n", &j);
}


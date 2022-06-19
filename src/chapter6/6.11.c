#include <stdio.h>

void main() 
{
    char arr[]="programming"; //char형 배열 선언
    char *ptr; //포인터 변수 선언
    int bigchar;
    ptr=arr; //포인터 변수에 배열의 시작주소 치환(배열명=시작주소)
    
    printf("before: %s \n\n", arr);
    printf("after:");
    
    while(*ptr){
        bigchar=*ptr-32; //ASCII 코드값을 이용하여 대문자 변환
        printf("%c", bigchar);
        ptr++;    
    }
    printf("\n");

}


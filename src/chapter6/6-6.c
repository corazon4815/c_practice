#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() 
{
    char buffer[80], *p=buffer;
    int len, i=0;
    printf("Input String: ");
    scanf("%s", p);
    len=strlen(p);
    while(*p)
        p++;
    
    printf("Inverse String: ");
    while(i<len){
        p--; //포인터의 위치를 하나씩 감소
        putchar(*p); //감소된 포인터의 위치에 따라 역방향 출력
        i++;
    }
    
    putchar('\n');
    getch();
    
}


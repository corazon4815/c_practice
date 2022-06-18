#include <stdio.h>
#include <ctype.h> 

void main() 
{
    char ch;
    ch=getchar();
    if(isdigit(ch)) //isdigit(); 숫자 여부를 구하는 함수
        printf("%c is a number \n", ch);
    else
        printf("%c is not a number \n", ch);
}
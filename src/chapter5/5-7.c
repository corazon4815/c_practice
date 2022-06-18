#include <stdio.h>
#include <ctype.h> 

void main() 
{
    char ch, ch1, ch2;
    printf("문자를 입력하시오 \n");
    ch=getchar();
    if(isupper(ch)) //isupper() : 대문자 여부를 판별하는 함수
    {
        printf("%c is a uppercase \n", ch);
        ch1 = tolower(ch); //tolower() : 소문자로 변환하는 함수
        printf("%c is lowercase \n", ch1);
    }
    else if(islower(ch)) //islower(): 소문자 여부를 판별하는 함수
    {
        printf("%c is a lowercase \n", ch);
        ch2 = toupper(ch);
        printf("%c is a uppercase \n", ch2);
    }    
    else
        printf("%c is not alpha character \n", ch);
}
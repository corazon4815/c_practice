#include <stdio.h>
#include <string.h>

void main() 
{
    char string[200];
    printf("문장을 입력한 후, Enter키를 치세요 \n");
    printf("아무것도 입력하지 않으면 프로그램은 종료됩니다.");
    
    do
    {
        gets(string);
        if(strlen(string) == 0) //문자열의 길이가 0인 경우 loop 종료
        {
            break;
        }
        printf("문자열의 길이는 %d입니다. \n", strlen(string));
    }while(1); //조건이 항상 참(1)이므로 loop반복
}
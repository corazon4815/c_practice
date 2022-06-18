#include <stdio.h>
#include <string.h> 

void main() 
{
    int len;
    char s[50];
    strcpy(s, "COMPUTER SCIENCE"); //strcpy(); 문자열을 복사하는 함수
    printf("%s \n\n", s);
    len = strlen(s);
    printf("%d \n\n", len);
}
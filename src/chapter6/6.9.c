#include <stdio.h>

void main() 
{
    unsigned char *p="Computer science 컴퓨터과학과"; //포인터 선언과 초기화
    unsigned char buff[20]={0, };
    int i = 0;
    while(*p){
        if(*p>127){ //한글 검색조건(한글은 2byte로 구성되기 때문에 ASCII 코드값이 127이상임)
            buff[i++] = *p;
        }    
        p++;    
    }
    puts(buff);
}


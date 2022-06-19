#include <stdio.h>

void main() 
{
    int str;
    char *name[5]={{"KOREA"},
                   {"NATIONAL"},
                   {"OPEN UNIVERSITY"}, //각 문자열들은 서로 다른 크기의 기억공간을 차지함
                   {"COMPUTER"},
                   {"SCIENCE"}};
    for(str=0; str<5; str++){
        printf("첫 번째 이름은 %s\n", *(name+str));
        return;
    }
}


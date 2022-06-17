#include <stdio.h>

void main() 
{
	static char a[31] = "KOREA NATIONAL OPEN UNIVERSITY";
    int i, count;
    count = 0;
    for(i=0; i<=29; i++)
        if(a[i]=='O')
            count++;
    printf("O의 갯수 = %d", count);
}
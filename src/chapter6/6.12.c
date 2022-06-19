#include <stdio.h>
#include <conio.h> //getche(), putch()
#include <ctype.h> //isupper()

void main() 
{
    char code[]="5dsdasd3dasd4asd3ds3";
    char ch[100];
    int i=0;
    
    for(;ch[i]=getche())!='\r';)
        if(isupper(ch[i]))
            ch[i++]=code[ch[i]-65];
        else
            i++;
    ch[i]='\0';
    printf("\n\n");
    
    for(i=0; ch[i] != '\0'; i++)
        putch(ch[i]);
}
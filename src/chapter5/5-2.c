#include <stdio.h>
#include <string.h>

void main() 
{
    char string[]="abcdefghijklmnopqrstuvwxyz";
    unsigned i, len;
    puts(string);
    len = strlen(string);
    for(i=0; i<len; i++){
        string[i] = string[i] & 0xDF;
    }
    puts(string);
}
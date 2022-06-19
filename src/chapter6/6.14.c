#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
    #define TOTAL 5
    char *song[10];
    char newSong[80];
    int i;
    for(i=0; i<TOTAL; i++){
        printf("애창곡 #%d?", (i+1));
        gets(newSong);
        song[i]=(char *) malloc((strlen(newSong)+1) * sizeof(char));
        strcpy(song[i], newSong);
    }
    printf("***입력한 노래 제목***\n");
    for(i=(TOTAL-1); i>=0; i--){
        printf("노래 #%d: %s\n", (i+1), song[i]);
        free(song[i]); //힙 공간을 모두 돌려줘야 함
    }
    
    
}
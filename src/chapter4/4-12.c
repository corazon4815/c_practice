#include <stdio.h>
#include <stdlib.h>

void main() 
{
	unsigned secret_num, guess_num, k, times=1;
    unsigned again=1, win=0;
    char replay;
    
    printf("** Game Start ** \n");
    while(again){
        printf("\n=%u번째 게임 = \n", times++); //%u : 부호없는 10진수
        secret_num = rand() % 100;
        
        win = 0;
        k =1; 
        while (k++ <= 7){ //7번의 기회가 존재
            printf("0부터 99사이의 수를 입력: ");
            scanf("%u", &guess_num);
            if(guess_num == secret_num){
                win = 1;
                k = 8;
            }
            else if (guess_num< secret_num)
                printf("%u보다 큰 수입니다.\n", guess_num);
            else
                printf("%u보다 작은 수 입니다.", guess_num);
        }
        if(win)
            printf("당신이 이겼습니다. 축하합니다. \n");
        else
            printf("당신이 졌습니다. %u였습니다. 다시 시도하세요. \n", secret_num);
        
        printf(" 다시 하시겠습니까? (y/n) ");
        
        getchar();
        
        replay = getchar();
        if(!(replay == 'y' || again == 'Y'))
            again = 0;
    }
    printf("\n** Good Bye ** \n");
   
    

}
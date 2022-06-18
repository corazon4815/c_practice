#include <stdio.h>

void main() 
{
    static int data[100]; //1차원 배열을 정적변수로 선언
    int i, j, N;
    printf("입력할 데이터의 개수를 입력하시오 : ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &data[i]); //배열의 각 요소에 데이터 입력
    for(i=0; i<N-1; i++)
        for(j=i+1; j<N; j++)
            if(data[i] > data[j]){ //XOR을 이용한 데이터 교환
                data[i] ^= data[j];
                data[j] ^= data[i];
                data[i] ^= data[j];
            }
    printf("정렬된 데이터 : \n");
    for(i=0; i<=N-1; i++){ //정렬된 배열을 출력
        printf("%10d", data[i]);
        if((i+1) % 7 == 0)
            printf("\n");
    }
}


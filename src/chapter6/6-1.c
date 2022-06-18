#include <stdio.h>
#define N 10

void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main() 
{
    int score[N]={0};
    int j, sum;
    float average;
    
    input(score, N);
    sum = sum2(score, N);
    average = (float) sum/N;
    printf("평균 : %f\n", average);
    
    sort(score, N);
    printf("성적순 : ");
    for(j=0; j<N; j++)
        printf("%d ",score[j]);
    printf("\n");
}

void input(int scr[], int size){ //배열을 매개변수로 전달
    int j;
    for(j=0; j<size; j++){
        printf("%d번째 성적을 입력하세요 : ", j+1);
        scanf("%d", &(scr[j]));
    }
            
int sum2(int scr[], int size){
    int sum, j;
    for(sum = 0, j=0; j< size; j++)
        sum += scr[j];
    return sum;
}                    

void sort(int scr[], int size){
    int j, k, temp;
    for(j=0; j< size-1; j++){
        for(k=size-1; k>j; k--){
            if(scr[k-1]> scr[k]){ //큰 점수와 작은 점수의 순서를 바꿈
                temp=scr[k-1];
                scr[k-1] = scr[k];
                scr[k]=temp;
            }
        }
    }
}    
    
}

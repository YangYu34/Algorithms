//백준 4344번 문제 - (평균은 넘겠지) 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c, n, *score;
  scanf("%d", &c);
  double rate[c];
  for(int i=0; i<c; i++){
    double avg=0.0;
    int cnt=0;
    scanf("%d", &n);
    score = (int *)malloc(sizeof(int)*n);
    for(int j=0; j<n; j++){
      scanf("%d", score+j);
      avg += *(score+j);
    }
    avg /= n;
    for(int j=0; j<n; j++){
      if(*(score+j) > avg){
        cnt++;
      }else{continue;}
    }
    free(score);
    rate[i]=((double)cnt/n)*100;
  }
  for(int i=0; i<c; i++){
    printf("%.3lf%%\n", rate[i]);
  }
  return 0;
}
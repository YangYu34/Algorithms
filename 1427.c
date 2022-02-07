//백준 1427번 문제 - (소트인사이드) 

#include <stdio.h>
#include <string.h>

int main() {
  char N[10]; //1,000,000,000
  scanf("%s", N);
  int len = strlen(N);
  int temp;

  for(int i=0; i<len-1; i++){
    for(int j=0; j<len; j++){
      if (N[j] < N[j+1]) { //현재값vs다음값
        temp = N[j];
        N[j] = N[j+1];
        N[j+1] = temp;
      }else{continue;}
    }
  }
  
  printf("%s\n", N);
  return 0;
}
//백준 1316번 문제 - (그룹 단어 체커)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int alpha[26];
//a는 97

int main()
{
  int n, check_cnt=0;
  char *word = (void*)malloc(100);
  memset(alpha, 0, sizeof(alpha)); //0으로 초기화
  scanf("%d", &n);
  for(int i=0; i<n; i++){
     scanf("%s", word);
     int len = strlen(word);
     check_cnt++;
     
     //체크시작
     for(int j=1; j<len; j++){
       if(alpha[word[j]-97] == -1){ //그룹단어가 아닌 경우
         check_cnt--;
         break;
       }
       if(word[j]!=word[j-1]){
         alpha[word[j-1]-97]=-1;
       }else{continue;}
     }
     memset(alpha, 0, sizeof(alpha)); //0으로 초기화
  }
  printf("%d\n", check_cnt);
  
  free(word);
  return 0;
}
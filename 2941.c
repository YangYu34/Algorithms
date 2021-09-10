//백준 2941번 문제 - (크로아티아 알파벳)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *a;

int main(){  
  char *str=(char *)malloc(sizeof(char)*100);
  char *croatia_alpha[]={"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  int count = 0;
  scanf("%s", str);
  int len = strlen(str);
  char * ptr;

  for(int i=0; i<8; i++){
    while(1){
      ptr = strstr(str, croatia_alpha[i]);
      if(ptr != NULL){
        count++;
        a = malloc(sizeof(croatia_alpha[0]));
        memset(a, '*', sizeof(croatia_alpha[i]));
        strncpy(ptr, a, strlen(croatia_alpha[i]));
        free(a);
      }
      else{
        break;
      }
    } 
  }
  for(int i=0; i<len; i++){
    if (str[i] != '*'){
      count++;
    }
  }
  printf("%d\n", count);
  
  free(str);
  return 0;
}
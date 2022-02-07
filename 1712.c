//백준 1712번 문제 - (손익분기점)

#include <stdio.h>

int main(){  
  int A, B, C;
  long break_even_point;
  scanf("%d %d %d", &A, &B, &C);
  
  if(B >= C){
    break_even_point = -1;
  }

  else{
    int num = (-1)*A/(B-C);
    break_even_point = num+1;
  }

  printf("%ld\n", break_even_point);
  return 0;
}

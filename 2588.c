//백준 2588번 문제 - (곱셈)

#include <stdio.h>

int main(void)
{
  int a, b;
  int result[4], i;
  scanf("%d %d", &a, &b);

  for(i=0; i<3; i++){
    result[i]=a*Mul(b,i);
    printf("%d\n", result[i]);
  }
  result[i]=a*b;
  printf("%d\n", result[i]);

  return 0;
}

int Mul(int n, int i){
  for(int j=0; j<i; j++){
    n /= 10;
  }
  return (n % 10);
}
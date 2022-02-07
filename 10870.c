//백준 10870번 문제 - (피보나치 수 5)

#include <stdio.h>

int pibonachi(int n){
  if (n==0) return 0;
  else if (n<3) return 1;
  return pibonachi(n-1) + pibonachi(n-2);
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", pibonachi(n));
  return 0;
}
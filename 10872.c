//백준 10872번 문제 - (팩토리얼)

#include <stdio.h>

int factorial(int n){
  if (n==0) return 1;
  return factorial(n-1) * n;
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", factorial(n));
  return 0;
}
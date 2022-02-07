//백준 1978번 문제 - (소수 찾기)

#include <stdio.h>

int main()
{
  int n, primeNumCount=0, num, i;
  scanf("%d", &n);

  for(int j=0; j<n; j++){
    scanf("%d", &num);
    for (i=2; i<num; i++){
      if (num % i == 0){ //소수가 아님
        break;
      }
    }
    if (i == num){ //소수임
      primeNumCount++;
    }
  }
  printf("%d\n", primeNumCount);

  return 0;
}
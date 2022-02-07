//백준 2775번 문제 - (부녀회장이 될테야)

#include <stdio.h>

int main()
{
  int t, k, n, i;
  int aparts[15][15];
  scanf("%d", &t);
  int residents[t];
 
  //아파트 미리 채워넣기
  for(i=0; i<15; i++){
    aparts[0][i] = i; //0층의 i호는 i
    aparts[i][1] = 1; //i층의 1호는 1
  }
  for(i=1; i<15; i++){
    for(int j=2; j<15; j++){
      aparts[i][j] = aparts[i][j-1] + aparts[i-1][j]; //핵심
    }
  }
  
  for(i=0; i<t; i++){
    scanf("%d", &k); //k층 입력
    scanf("%d", &n); //n호 입력
    residents[i] = aparts[k][n];
  }

  for(i=0; i<t; i++){
    printf("%d\n", residents[i]);
  }

  return 0;
}
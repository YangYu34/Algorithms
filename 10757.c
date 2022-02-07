/*백준 10757번 문제 - (큰 수 A+B)
  큰 수를 정수 변수에 넣는 것이 아니라 문자열에 저장하여 각 자리별로 계산하는 것이 핵심 포인트
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10001
char *A, *B;

int main()
{
  A = (char *)calloc(SIZE, sizeof(char));
  B = (char *)calloc(SIZE, sizeof(char));

  memset(A, '0', SIZE);
  memset(B, '0', SIZE);

  scanf("%s", A);
  scanf("%s", B);
  int a_len = strlen(A);
  int b_len = strlen(B);
  int len = a_len>b_len ? a_len : b_len;
  int sum=0, carry=0, j=0;

  char *result = (char *)malloc(len+1);
  
  for(int i=len-1; i>-1; i--){
    if(a_len>b_len){
      if(i<a_len-b_len){
        sum = A[i]-'0'+carry;
      }
      else{
        sum = A[i]-'0' + B[i-a_len+b_len]-'0'+carry;
      }
    }
    else{
      if(i<b_len-a_len){
        sum = B[i]-'0'+carry;
      }
      else{
        sum = B[i]-'0' + A[i-b_len+a_len]-'0'+carry;
      }
      
    }
    
    result[j++] = sum%10 + '0';

    if(sum>9){carry=1;}
    else{carry=0;}

    if(i==0 && carry==1){
      result[j++] = sum/10 + '0';
    }
  }

  len = strlen(result);
  for(j=len-1; j>-1; j--){
    printf("%c", result[j]);
  }printf("\n");

  free(A);
  free(B);
  free(result);
  
  return 0;
}
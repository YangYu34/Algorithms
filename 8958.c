//백준 8958번 문제 - (OX퀴즈)

#include <stdio.h>

int main()
{
	int n=0, result=0, i,j, stack=1;
	char q[100][80]={0,};
	scanf("%d", &n);
	for(i=0; i<n; i++)//테스트케이스 입력
	{
		scanf("%s", q[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<80; j++)
		{
			if(q[i][j] == '\0')
				break;
			if(q[i][j] == 'O')
			{
				result += stack;
				stack += 1;
			}
			else
			{
				stack = 1;
			}
		}
		printf("%d\n", result);
		stack = 1;
		result = 0;
	}
	return 0;
}
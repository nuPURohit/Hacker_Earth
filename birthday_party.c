#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T!=0)
	{
		int N;
		long int M;
		scanf("%d",&N);
		scanf("%ld",&M);

		if((M % N)==0)
		{
			printf("Yes\n");
		}

		else
		printf("No\n");
	T--;
	}
return 0;
}

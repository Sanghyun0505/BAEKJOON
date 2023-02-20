#include <stdio.h>

int main()
{
	long long N;
	long long W, H, D;
	long long len;

	scanf("%lld %lld %lld", &N, &W, &H);
	D = W*W + H*H;

	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &len);
	
		if (len*len <= D)
		{
			printf("DA\n");
		}
		else
		{
			printf("NA\n");
		}
	}

	return 0;
}
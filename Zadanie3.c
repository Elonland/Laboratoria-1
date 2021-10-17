#include <stdio.h>

int main(void)
{
int n;
scanf("%d",&n);

for(int k = 0; k < n; k++)
{
	for(int i = 0; i < 2*n; i++)
	{
	printf("*");
	}
printf("\n");
}
return 0;
}

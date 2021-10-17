#include <stdio.h>

int main(void)
{

int n;
scanf("%d",&n);
int temp = n-1;
int o = 3;

for(int i = 0; i < n; i++)
{

for(int k = 0; k < temp; k++)
printf(" ");

--temp;

if(i == 0)
printf("*\n");
else
{
for(int k = 0; k < o; k++)
printf("*");

printf("\n");
o = o+2;
}

}

/*
int temp = n-1;

for(int i = 0; i < n; i++)
{

for(int k = 0; k< temp; k++)
printf(" ");


for(int k = 0; k < i+1; k++)
printf("*"); 			// zamiast 2 pętli może być jedna z warunkiem if

for(int k = 0; k < i; k++)
printf("*");

--temp;

printf("\n");

}

*/

return 0;
}

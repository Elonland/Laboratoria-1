#include <stdio.h>

int main(void)
{

char A = 'A';
char B = 'B';
char R = 'R';
char K = 'K';
char D = 'D';
int k = 0;

for (int i = 0; i < 11; i++)
{
while(k < 11 - i)
{
if(k == 0 || k == 3 || k == 5 || k == 7 || k == 10)
printf("%c ",A);
else if(k == 1 || k == 8)
printf("%c ",B);
else if(k == 2 || k == 9)
printf("%c ",R);
else if(k == 4)
printf("%c ",K);
else
printf("%c ",D);

++k;
}
printf("\n");
for (int j = 0; j < 12 - k; k++)
printf(" ");
k=0;
}

return 0;
}

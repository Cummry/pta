#include <stdio.h>

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void PrintN( int N)
{
	int i=1;
	while(i<=N)
	{
		printf("%d\n",i);
		i++;
	}
}

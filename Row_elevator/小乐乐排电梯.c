#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0;
	scanf("%d", &q);
	if (q < 12)
	{
		w = 2;
	}
	else 
		w = (q / 12 * 4)+2;
	printf("%d\n", w);
	return 0;
}
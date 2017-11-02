#include <stdio.h>
int main(void)
{
	int ThisSum=0, MaxSum;
	int ar[5] = {-1, 5, 0,-3, 7};
	for (int i =0; i<5; i++)
	{
		ThisSum += ar[i];
		if(ThisSum<0)
			ThisSum=0;
		if(ThisSum>MaxSum)
			MaxSum=ThisSum;
	}
	printf("%d",MaxSum);
	getchar();
	return 0;
}

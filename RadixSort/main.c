#include <stdio.h>
#include <stdlib.h>

#define RADIX_10 10
#define KEYNUM_10 10

int GetNumInPos(int num, int pos);
void RadixSort(int * datearray, int datenum);
int main(void)
{
	int ar[10] = {10, 9876, 565, 12, 105764654, 15648, 1, 999, 1235648, 156483};
	RadixSort(ar,10);
	for(int i=0; i<10; i++)
		printf("%d\n",ar[i]);
	getchar();
	return 0;
}

int GetNumInPos(int num, int pos)
{
	int temp = 1;
	for(int i = 0; i < pos-1; i++)
		temp*=10;
	
	return (num/temp)%10;
}

void RadixSort(int * datearray, int datenum)
{
	int *radixarrays[RADIX_10];
	for(int i = 0; i<RADIX_10;i++)
	{
		radixarrays[i]=(int *)malloc((datenum+1)*sizeof(int));
		radixarrays[i][0]=0;
	}

	for(int pos = 0,j=0; pos < KEYNUM_10; pos++)
	{
		for(int i = 0; i < datenum; i++)
		{
			int num = GetNumInPos(datearray[i],pos);
			int index = ++radixarrays[num][0];
			radixarrays[num][index]=datearray[i];
		}

		for(int i = 0, j =0; i<RADIX_10; i++)
		{
			for(int k = 1; k<=radixarrays[i][0];k++)
				datearray[j++]=radixarrays[i][k];
			radixarrays[i][0]=0;
		}
	}
}
 
	

#include <stdio.h>
int Max(int a, int b, int c);
int MaxSubsequenceSum(const int A[], int left, int right);
int main(void)
{
	int ar[6] = {-1, 1, -1, 5, -4, 8};
	int a = MaxSubsequenceSum(ar,0,5);
	printf("%d",a);
	getchar();
	return 0;
}

int MaxSubsequenceSum(const int A[], int left, int right)
{
	if(left==right)
		return A[left];
	
	int mid = (left+right)/2;
	
	int ThisLeftBorderSum = 0, MaxLeftBorderSum = 0;
	for(int i = mid; i>=left; i--)
	{
		ThisLeftBorderSum += A[i];
		if(ThisLeftBorderSum>MaxLeftBorderSum)
			MaxLeftBorderSum=ThisLeftBorderSum;
	}

	int ThisRightBorderSum = 0, MaxRightBorderSum = 0;
	for(int i = mid+1; i<=right;i++)
	{
		ThisRightBorderSum+=A[i];
		if(ThisRightBorderSum>MaxRightBorderSum)
			MaxRightBorderSum=ThisRightBorderSum;
	}
	
	int MaxLeftSum, MaxRightSum;
	MaxLeftSum=MaxSubsequenceSum(A,left,mid);
	MaxRightSum=MaxSubsequenceSum(A,mid+1,right);

	return Max(MaxLeftSum,MaxRightSum,MaxLeftBorderSum+MaxRightBorderSum);
}

int Max(int a, int b, int c)
{
	int max = a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;

	return max;
}

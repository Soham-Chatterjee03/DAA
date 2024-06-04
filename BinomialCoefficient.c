//Bionmial Coeff
#include<stdio.h>
int min(int a,int b)
{
	return(a<b)?a:b;
}
int binomialCoeff(int n,int k)
{
	int C[n+1][k+1];
	int i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
				C[i][j]=1;
			else
				C[i][j]=C[i-1][j-1]+C[i-1][j];
		}
	}
	return C[n][k];
}
void main()
{
	int n,k;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of k:");
	scanf("%d",&k);
	printf("Value of C(%d,%d) is %d",n,k,binomialCoeff(n,k));
}

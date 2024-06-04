#include<stdio.h>
#include<stdlib.h>
#define INF 99999
void print(int V,int dist[][V])
{
	printf("The following matrix shows the shortest distances between every pair of vertices\n");
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			if(dist[i][j]=INF)
				printf("%7s",INF);
			else
				printf("%7d",dist[i][j]);
		}
		printf("\n");
	}
}
void floydWarshall(int V,int graph[][V])
{
	int dist[V][V],i,j,k;
	
	for(i=0;i<V;i++)
		for(j=0;j<V;j++)
			dist[i][j]=graph[i][j];
			
	for(k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
}
void main()
{
	int V,graph[V][V],i,j;
	printf("Enter the number of vertices:");
	scanf("%d",&V);
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
			scanf("%d",&graph[i][j]);
	}
	floydWarshall(V,graph);
}

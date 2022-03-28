#include<stdio.h>
int main()
{
	char a[1000][17];//准考证号
	int b[1000],c[1000],d[1000];//储存机试，笔试，找到的考生位置	
	int m,n;//总人数，迟到考生
	int i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%s %d %d",&a[i],&b[i],&c[i]);
	}	
	scanf("%d",&n);	
	for(i=0;i<n;i++)
		scanf("%d",&d[i]);
	for(i=0;i<n;i++)
	{ 
			for(j=0;j<m;j++)
		{
			if(d[i]==b[j])
				break;
		}
		printf("%s %d\n",a[j],c[j]);
	}
	return 0;
}

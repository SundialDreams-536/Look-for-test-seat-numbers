#include<stdio.h>
int main()
{
	char a[1000][17];//׼��֤��
	int b[1000],c[1000],d[1000];//������ԣ����ԣ��ٵ�����	
	int m,n;//���������ٵ�����
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

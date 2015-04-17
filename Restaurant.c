#include<stdio.h>
int main()
{
	int t,i,j,hcf=1;
	scanf("%d",&t);
	int l[t],b[t],s[t],a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&l[i],&b[i]);
		if( l[i]<b[i])
		{
			s[i]=l[i];
		}
		else
		{
			s[i]=b[i];
		}
		hcf=1;
		for(j=2;j<=s[i];j++)
		{
			if(l[i]%j==0 && b[i]%j==0)
			{
				hcf=j;
			}
		}
		a[i]=((l[i]*b[i])/(hcf*hcf));
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",a[i]);
	}
}

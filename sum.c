#include<stdio.h>
int add(int i,int n,int sum)
{
	if(i>n)
	{
		return sum;
	}
	sum=sum+i;
	return add(i+1,n,sum);
}
int main()
{
int m,n;
int sum=0;
printf("enter the start and end range value ");
scanf("%d %d",&m,&n);
int sum1=add(m,n,0);
printf("sum1=%d\n",sum1);
return 0;
}


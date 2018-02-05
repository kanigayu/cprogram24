#include<stdio.h>
int main()
{
int a[50],i,k;
printf("enter the num of array\n");
scanf("%d",&k);
for(i=0;i<k;++i)
{
	printf("enter the elements\n",i+1);
	scanf("%d",&a[i]);
}

for(i=1;i<k;++i)
{
	if(a[0]>a[i])
	a[0]=a[i];
}
printf("largest element%d\n",a[0]);
return 0;
}

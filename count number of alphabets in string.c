#include<stdio.h>
int main()
{
	char a[100];
	scanf("%[^\n]",a);
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		count++;
	}
	printf("%d",count);
	return 0;
}

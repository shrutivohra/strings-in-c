#include<stdio.h>
int main()
{
	char a[100],key;
	scanf("%[^\n]\n",a);
		scanf("%c",&key);
	int i,count=0;
//	scanf("%c",&key);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==key)
		count++;
	}
	printf("%d",count);
	return 0;
}

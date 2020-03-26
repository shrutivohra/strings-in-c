#include<stdio.h>
int main()
{
char a[100];
int i,count=0;
scanf("%[^\n],a);
for(i=0;a[i]!='\0;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
count++;
}
}
printf("%d",count);
return 0;
}

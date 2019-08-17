#include<stdio.h>
int main()
{
int i,j=0,b;
char a[0];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
b=i;
for(i=0;i<b;i++)
{
if(((a[i]>=48)&&(a[i]<=57))||(a[i]=='.'))
{
j=1;
}
else
{
j=0;
break;
}
}
if(j==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

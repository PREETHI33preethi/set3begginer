#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],temp,N,i,j;
clrscr();
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<N;i++)
{
printf("\n%d",a[i]);
}
getch();
}

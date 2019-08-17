#include<stdio.h>
#include<conio.h>
void main()
{
int i,max,N,number[50];
clrscr();
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&number[i]);
}
max=number[0];
for(i=0;i<N;i++)
{
if(max<number[i])
{
max=number[i];
}
}
printf("%d",max);
getch();
}

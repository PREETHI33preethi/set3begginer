#include<stdio.h>
#include<conio.h>
void main()
{
int i,min,N,number[50];
clrscr();
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&number[i]);
}
min=number[0];
for(i=0;i<N;i++)
{
if(min>number[i])
{
min=number[i];
}
}
printf("%d",min);
getch();
}

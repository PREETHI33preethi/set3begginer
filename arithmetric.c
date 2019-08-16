#include<stdio.h>	 	
void main()
{
int N,A,D;    
scanf("%d%d%d",&N,&A,&D);
sum=(N*(2*A+(N-1)*D))/2;
printf("sum is %d",sum);
return 0;
}

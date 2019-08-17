#include <stdio.h>
#define max 10
int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];
void merging(int lw, int md, int hg)
 {
   int l1, l2, i;
   for(l1 = lw, l2 = md + 1, i = lw; l1 <= md && l2 <= hg; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   while(l1 <= md)    
      b[i++] = a[l1++];
   while(l2 <= hg)   
      b[i++] = a[l2++];
   for(i = lw; i <= hg; i++)
      a[i] = b[i];
}
void sort(int lw, int hg) 
{
   int md;
   if(lw < hg) 
   {
      mid = (lw + hg) / 2;
      sort(lw, md);
      sort(md+1, hg);
      merging(lw, md, hg);
   } 
   else 
   { 
      return;
   }   
}

int main() 
  { 
   int i;
   printf("List before sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
   sort(0, max);
   printf("\nList after sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
